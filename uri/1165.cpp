#include <iostream>
#include <math.h>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        bool primo = true;
        for (int j = 2; j < k && primo; j++) {
            if (k % j == 0) {
                cout << k << " nao eh primo" << endl;
                primo = false;
            }
        }
        if (primo)
            cout << k << " eh primo" << endl;
    }
    return 0;
}