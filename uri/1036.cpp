#include <iostream>
#include <math.h>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double A, B, C, delta, x1, x2;
    cin >> A >> B >> C;
    if (A != 0) {
        delta = pow(B, 2) - 4 * A * C;
        if (delta >= 0) {
            x1 = (-1 * B + sqrt(delta)) / (2 * A);
            x2 = (-1 * B - sqrt(delta)) / (2 * A);
            cout << fixed;
            cout.precision(5);
            cout << "R1 = " << x1 << endl;
            cout << "R2 = " << x2 << endl;
        } else
            cout << "Impossivel calcular" << endl;
    } else
        cout << "Impossivel calcular" << endl;
    return 0;
}