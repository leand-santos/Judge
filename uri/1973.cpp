#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, oneCount = 0, stolen = 0;
    long long int sum = 0, m;
    bool even = false;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &m);
        sum += m;
        if (!even) {
            if (m == 1)
                oneCount++;
            else if (m % 2 == 0) {
                even = true;
                stolen = i + 1;
            }
        }
    }

    if (even)
        cout << stolen << " " << sum - (stolen * 2 - 1) + oneCount << endl;
    else
        cout << n << " " << sum - n << endl;
    return 0;
}