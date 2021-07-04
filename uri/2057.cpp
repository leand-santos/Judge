#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int S, T, F, sum;
    cin >> S >> T >> F;
    sum = S + T + F;
    if (sum > 24)
        cout << sum - 24 << endl;
    else if (sum < 0)
        cout << 24 + sum << endl;
    else
        cout << sum << endl;
    return 0;
}