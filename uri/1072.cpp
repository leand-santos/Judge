#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, m, in = 0, out = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m >= 10 && m <= 20)
            in++;
        else
            out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}