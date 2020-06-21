#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double h, kmh;
    cin >> h >> kmh;
    cout << fixed;
    cout.precision(3);
    cout << (kmh * h) / 12 << endl;
    return 0;
}