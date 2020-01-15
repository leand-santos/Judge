#include <iostream>
#include <math.h>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    long long int n, v, T;
    while (cin >> n) {
        int minSpace = 0;
        if (n == 0)
            break;
        v = pow(2, (n - 1) * 2);
        while (v != 0) {
            v /= 10;
            minSpace++;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v = pow(2, i + j);
                if (v < 10)
                    T = minSpace;
                else if (v < 100)
                    T = minSpace - 1;
                else if (v < 1000)
                    T = minSpace - 2;
                else if (v < 10000)
                    T = minSpace - 3;
                else if (v < 100000)
                    T = minSpace - 4;
                else if (v < 1000000)
                    T = minSpace - 5;
                else if (v < 10000000)
                    T = minSpace - 6;
                else if (v < 100000000)
                    T = minSpace - 7;
                else if (v < 1000000000)
                    T = minSpace - 8;
                if (j == 0)
                    T--;
                for (int k = 0; k < T; k++)
                    cout << " ";

                cout << v;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}