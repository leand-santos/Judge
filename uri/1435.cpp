#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int n;
    char c;
    while (cin >> n) {
        if (n == 0)
            break;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << " ";
                if (i + j < n) {
                    if (i < j) {
                        if (i + 1 < 10)
                            cout << " ";
                        cout << i + 1;

                    } else {
                        if (j + 1 < 10)
                            cout << " ";
                        cout << j + 1;
                    }
                } else if (i >= j) {
                    if (n - i < 10)
                        cout << " ";
                    cout << n - i;
                } else {
                    if (n - j < 10)
                        cout << " ";
                    cout << n - j;
                }
                if (j != n - 1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}