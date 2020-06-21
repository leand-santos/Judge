#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int lim = n / 3;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == n / 2 && i == n / 2)
                    cout << 4;
                else if (j < n - lim && j >= lim && i < n - lim && i >= lim)
                    cout << 1;
                else if (i == j)
                    cout << 2;
                else if (i + j == n - 1)
                    cout << 3;
                else
                    cout << 0;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}