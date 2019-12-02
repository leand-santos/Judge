#include <iostream>
// status: Accepted
// problem type: Inicaiante

using namespace std;

int main() {
    int v, soma = 0;
    for (int i = 0; i < 5; i++) {
        cin >> v;
        if (v % 2 == 0)
            soma++;
    }
    cout << soma << " valores pares" << endl;
    return 0;
}