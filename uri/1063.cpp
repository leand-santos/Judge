#include <iostream>
#include <queue>
#include <stack>
// status: Wrong 5%
// problem type: Structures

using namespace std;

int main() {
    int n;
    bool validate;
    char m;
    queue<char> fila;
    stack<char> pilha;
    while (cin >> n) {
        if (n == 0)
            break;
        for (int i = 0; i < n; i++) {
            cin >> m;
            fila.push(m);
        }
        validate = true;
        for (int i = 0; i < n; i++) {
            cin >> m;
            cout << endl << "m: " << m << endl;
            if (validate) {
                while (!fila.empty() && m != fila.front()) {
                    pilha.push(fila.front());
                    cout << "I";
                    cout << ": " << fila.front() << endl;
                    fila.pop();
                }

                if (!fila.empty() && m == fila.front()) {
                    cout << "I";
                    cout << ": " << fila.front() << endl;
                    pilha.push(fila.front());
                    fila.pop();
                }
                cout << "PILHA TOP:" << pilha.top() << endl;
                if (m != pilha.top()) {
                    cout << " Impossible";
                    validate = false;
                } else {
                    cout << "R";
                    cout << ": " << pilha.top() << endl;
                }
                pilha.pop();
            }
        }
        while (!pilha.empty())
            pilha.pop();
        while (!fila.empty())
            fila.pop();
        cout << endl;
    }
    return 0;
}