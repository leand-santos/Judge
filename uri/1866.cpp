#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}