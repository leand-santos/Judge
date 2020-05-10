#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a == b || a == -b || a % b == 0)
        cout << a / b << " " << 0 << endl;
    else if (a >= 0 && b > 0)
        cout << a / b << " " << a % b << endl;
    else if (a >= 0 && b < 0)
        cout << a / b << " " << a % b << endl;
    else if (a <= 0 && b > 0)
        cout << a / b - 1 << " " << a - b * (a / b - 1) << endl;
    else if (a <= 0 && b < 0)
        cout << a / b + 1 << " " << a - b * (a / b + 1) << endl;

    return 0;
}
