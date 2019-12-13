#include <iostream>
// status: Accepted
// problem type:  Iniciante

using namespace std;

int main() {
    int n, x, y, aux;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int soma = 0;
        cin >> x >> y;
        if (x > y) {
            aux = x;
            x = y;
            y = aux;
        }
        for (int j = x + 1; j < y; j++)
            if (j % 2 == 1)
                soma += j;
        cout << soma << endl;
    }
    return 0;
}