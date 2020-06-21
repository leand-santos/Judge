#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int x;
    long int y;
    cin >> x >> y;
    for (int i = 1; i <= y; i++) {
        cout << i;
        if (i % x != 0)
            cout << " ";
        if (i % x == 0)
            cout << endl;
    }
    return 0;
}