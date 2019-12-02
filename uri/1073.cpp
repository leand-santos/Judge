#include <iostream>
#include <math.h>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    long long int n;
    cin >> n;
    cout << fixed;
    cout.precision(0);
    for (int i = 2; i <= n; i += 2)
        cout << i << "^"
             << "2"
             << " = " << pow(i, 2) << endl;
    return 0;
}