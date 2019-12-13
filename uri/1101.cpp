#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int m, n, aux;
    while (cin >> m >> n) {
        int soma = 0;
        if (m <= 0 || n <= 0)
            break;
        if (m > n) {
            aux = m;
            m = n;
            n = aux;
        }
        for (int i = m; i <= n; i++) {
            cout << i << " ";
            soma += i;
        }
        cout << "Sum=" << soma << endl;
    }
    return 0;
}