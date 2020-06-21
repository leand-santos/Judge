#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int codigo;
    double quantidade;
    cin >> codigo >> quantidade;
    cout << fixed;
    cout.precision(2);
    if (codigo == 1)
        cout << "Total: R$ " << 4.00 * quantidade << endl;
    else if (codigo == 2)
        cout << "Total: R$ " << 4.50 * quantidade << endl;
    else if (codigo == 3)
        cout << "Total: R$ " << 5.00 * quantidade << endl;
    else if (codigo == 4)
        cout << "Total: R$ " << 2.00 * quantidade << endl;
    else if (codigo == 5)
        cout << "Total: R$ " << 1.50 * quantidade << endl;
    return 0;
}