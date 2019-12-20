#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        for (int i = 1; i <= n; i++) {
            cout << i;
            if (i != n)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}