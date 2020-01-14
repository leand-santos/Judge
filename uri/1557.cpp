#include <iostream>
#include <math.h>
// status: Presentation Error
// problem type: Iniciante

using namespace std;

int main() {
    long long int n, v, p, minSpace = 0;
    while (cin >> n) {
        if (n == 0)
            break;
        p = pow(2, (n - 1) * 2);
        while (p > 10) {
            p /= 10;
            minSpace++;
        }
        cout << minSpace << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v = pow(2, i + j);
                for (int k = 0; k < minSpace; k++)
                    cout << " ";

                cout << v;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}