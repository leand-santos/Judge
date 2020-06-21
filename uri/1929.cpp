#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int vet[4];
    bool response = false;
    cin >> vet[0] >> vet[1] >> vet[2] >> vet[3];

    for (int i = 0; i < 4 && !response; i++) {
        for (int j = 0; j < 4 && !response; j++) {
            if (j != i)
                for (int k = 0; k < 4 && !response; k++) {
                    if (k != i && k != j)
                        if (vet[i] > vet[j] && vet[i] > vet[k] &&
                            vet[i] < vet[j] + vet[k]) {
                            cout << "S" << endl;
                            response = true;
                        }
                }
        }
    }
    if (!response)
        cout << "N" << endl;
    return 0;
}