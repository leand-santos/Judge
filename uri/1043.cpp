#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    cout << fixed;
    cout.precision(1);
    if (abs(l2 - l3) < l1 && l1 < l2 + l3)
        if (abs(l1 - l3) < l1 && l2 < l1 + l3)
            if (abs(l1 - l2) < l1 && l3 < l1 + l2)
                cout << "Perimetro = " << l1 + l2 + l3 << endl;
            else
                cout << "Area = " << (l1 + l2) * l3 / 2 << endl;
        else
            cout << "Area = " << (l1 + l2) * l3 / 2 << endl;
    else
        cout << "Area = " << (l1 + l2) * l3 / 2 << endl;
    return 0;
}