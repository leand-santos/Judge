#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double n;
    cin >> n;
    cout << fixed;
    cout.precision(4);
    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << n << endl;
        n /= 2;
    }
    return 0;
}