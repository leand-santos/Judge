#include <iostream>
#include <math.h>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double S = 0;
    for (double i = 0; i < 20; i++)
        S += (i * 2 + 1) / (pow(2, i));
    cout << fixed;
    cout.precision(2);
    cout << S << endl;
    return 0;
}