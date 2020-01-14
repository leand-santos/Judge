#include <iostream>
#include <math.h>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int A, B;
    double C;
    while (cin >> A) {
        if (A == 0)
            break;
        cin >> B >> C;
        C /= 100;
        cout << (int)sqrt((A * B) / C) << endl;
    }
    return 0;
}