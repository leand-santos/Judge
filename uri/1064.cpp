#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double v, soma = 0, media;
    for (int i = 0; i < 6; i++) {
        cin >> v;
        if (v > 0) {
            soma++;
            media += v;
        }
    }
    media /= soma;
    cout << soma << " valores positivos" << endl;
    cout << fixed;
    cout.precision(1);
    cout << media << endl;
    return 0;
}