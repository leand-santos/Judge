#include <iostream>
// status:
// problem type: Iniciante

using namespace std;

int main() {
    int n, m, pos = 0, menorValor;
    cin >> n;
    cin >> m;
    menorValor = m;
    for (int i = 1; i < n; i++) {
        cin >> m;
        if (m < menorValor) {
            menorValor = m;
            pos = i;
        }
    }
    cout << "Menor valor: " << menorValor << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}