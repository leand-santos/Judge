#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, j;
    long long int PA, PB;
    double G1, G2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> PA >> PB >> G1 >> G2;
        for (j = 0; PA <= PB && j <= 100; j++) {
            PA += (PA * G1) / 100;
            PB += (PB * G2) / 100;
        }
        if (j <= 100)
            cout << j << " anos." << endl;
        else
            cout << "Mais de 1 seculo." << endl;
    }
    return 0;
}