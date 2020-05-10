#include <iostream>
#include <math.h>
// status: Accepted
// problem type: AD-HOC

using namespace std;

int main() {
    long long int a, b;
    while (scanf("%lld %lld", &a, &b) != EOF) {
        long long int n = 0, result = 0;
        while (a != 0 || b != 0) {
            if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1))
                result += pow(2, n);
            a /= 2;
            b /= 2;
            n++;
        }
        cout << result << endl;
    }

    return 0;
}