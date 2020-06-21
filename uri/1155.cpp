#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double S = 0;
    for (int i = 1; i <= 100; i++)
        S += 1.0 / i;
    cout << fixed;
    cout.precision(2);
    cout << S << endl;
    return 0;
}