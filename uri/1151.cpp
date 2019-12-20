#include <iostream>
#include <vector>
// status: Accepted
// problem type: Iniciante

using namespace std;

int n, p = 0;
int vet[1001];
int fibo(int k) {
    if (n != k) {
        if (k == 0)
            vet[k] = 0;
        else if (k == 1)
            vet[k] = 1;
        else
            vet[k] = vet[k - 1] + vet[k - 2];
        cout << vet[k];
        if(k!= n - 1)
            cout << " ";
        fibo(k + 1);
    }
}

int main() {
    cin >> n;
    fibo(0);
    cout << endl;
    return 0;
}