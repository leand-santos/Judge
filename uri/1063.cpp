#include <iostream>
#include <queue>
#include <stack>
// status: Accepted
// problem type: Structures

using namespace std;

int main() {
    int n;
    char m;
    while (cin >> n && n != 0) {
        queue<char> in, out;
        stack<char> aux;
        bool validade;
        validade = true;
        for (int i = 0; i < n; i++) {
            cin >> m;
            in.push(m);
        }
        for (int i = 0; i < n; i++) {
            cin >> m;
            out.push(m);
        }

        for (int i = 0; i < n * 2 && validade; i++) {
            if (aux.empty() || (!in.empty() && out.front() != aux.top())) {
                aux.push(in.front());
                in.pop();
                cout << "I";
            } else if (!aux.empty() && aux.top() == out.front()) {
                cout << "R";
                aux.pop();
                out.pop();
            } else {
                cout << " Impossible";
                validade = false;
            }
        }
        cout << endl;
    }
    return 0;
}