#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    long long int n, m = 0;
    cin >> n;
    for (int i = 0; i < 1000; i++) {
        if (m == n)
            m = 0;
        cout << "N[" << i << "] = " << m << endl;
        m++;
    }
    return 0;
}