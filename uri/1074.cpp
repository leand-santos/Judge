#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == 0)
            cout << "NULL" << endl;
        else {
            if (m % 2 == 0)
                cout << "EVEN ";
            else
                cout << "ODD ";
            if (m > 0)
                cout << "POSITIVE" << endl;
            else
                cout << "NEGATIVE" << endl;
        }
    }
    return 0;
}