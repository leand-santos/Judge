#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int n, m;
    while (cin >> n) {
        int minN = 1;
        for (int i = 0; i < n; i++) {
            cin >> m;
            if (minN < 2 && m >= 10 && m < 20)
                minN = 2;
            if (minN < 3 && m >= 20)
                minN = 3;
        }
        cout << minN << endl;
    }
    return 0;
}