#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j < i) {
                    if (i - j + 1 < 100)
                        cout << " ";
                    if (i - j + 1 < 10)
                        cout << " ";
                    cout << i - j + 1;
                } else if (j >= i) {
                    if (j - i + 1 < 100)
                        cout << " ";
                    if (j - i + 1 < 10)
                        cout << " ";
                    cout << j - i + 1;
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