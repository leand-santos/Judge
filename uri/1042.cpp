#include <iostream>
#include <vector>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    long long int vet[3], aux[3], aux2;
    for (int i = 0; i < 3; i++) {
        cin >> vet[i];
        aux[i] = vet[i];
    }
    for (int j = 0; j < 3; j++)
        for (int i = 0; i < j; i++) {
            if (vet[i] > vet[j]) {
                aux2 = vet[i];
                vet[i] = vet[j];
                vet[j] = aux2;
            }
        }
    for (int i = 0; i < 3; i++)
        cout << vet[i] << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << aux[i] << endl;

    return 0;
}