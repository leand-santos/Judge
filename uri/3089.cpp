#include <iostream>
// status: Accepted
// problem type: Beginner

#define INF 100000001

using namespace std;

int main() {
    int n;
    long long int p[100001], pair1, pair2;

    while (cin >> n && n != 0) {
        for (int i = 0; i < n * 2; i++) {
            cin >> p[i];
        }
        int j = n * 2 - 1;
        long long int max = 0, min = INF;
        for (int i = 0; i < n; i++, j--) {
            if (p[i] + p[j] > max)
                max = p[i] + p[j];
            if (p[i] + p[j] < min)
                min = p[i] + p[j];
        }
        cout << max << " " << min << endl;
    }
    return 0;
}