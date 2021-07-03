#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, p, q;
    float sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
        if (p == 1001)
            sum += 1.5 * q;
        else if (p == 1002)
            sum += 2.5 * q;
        else if (p == 1003)
            sum += 3.5 * q;
        else if (p == 1004)
            sum += 4.5 * q;
        else if (p == 1005)
            sum += 5.5 * q;
    }
    printf("%.2f\n", sum);

    return 0;
}