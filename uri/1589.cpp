#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, r1, r2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> r1 >> r2;
        cout << r1 + r2 << endl;
    }
    return 0;
}