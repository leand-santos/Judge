#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int vet[10];
    for (int i = 0; i < 10; i++) {
        cin >> vet[i];
        if (vet[i] <= 0)
            vet[i] = 1;
    }
    for (int i = 0; i < 10; i++)
        cout << "X[" << i << "] = " << vet[i] << endl;
    return 0;
}