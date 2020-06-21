#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n;
    double x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        cout << fixed;
        cout.precision(1);
        if (y == 0)
            cout << "divisao impossivel" << endl;
        else
            cout << x / y << endl;
    }
    return 0;
}