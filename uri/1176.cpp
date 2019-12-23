#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

long long int n, vet[1000];

int fibo(int k) {
    if (n != k) {
        if (k == 0)
            vet[k] = 0;
        else if (k == 1)
            vet[k] = 1;
        else
            vet[k] = vet[k - 1] + vet[k - 2];
        fibo(k + 1);
    } else
        cout << "Fib(" << n - 1 << ") = " << vet[n - 1] << endl;
}

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> n;
        n++;
        fibo(0);
    }
    return 0;
}