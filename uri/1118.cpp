#include <iostream>
// status: Accépted
// problem type: Beginner

using namespace std;

int main() {
    double n1, n2;
    int rep;
    cout << fixed;
    cout.precision(2);
    do {
        do {
            cin >> n1;
            if (n1 < 0 || n1 > 10)
                cout << "nota invalida" << endl;
        } while (n1 < 0 || n1 > 10);
        do {
            cin >> n2;
            if (n2 < 0 || n2 > 10)
                cout << "nota invalida" << endl;
        } while (n2 < 0 || n2 > 10);
        cout << "media = " << (n1 + n2) / 2 << endl;
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> rep;
        } while (rep != 1 && rep != 2);
    } while (rep == 1);
    return 0;
}