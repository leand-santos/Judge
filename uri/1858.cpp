#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int n, t, min, pos;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (i == 0) {
            pos = 0;
            min = t;
        } else {
            if (t < min) {
                min = t;
                pos = i;
            }
        }
    }
    cout << pos + 1 << endl;

    return 0;
}