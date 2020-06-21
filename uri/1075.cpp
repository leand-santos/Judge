#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 10001; i++)
        if (i % n == 2)
            cout << i << endl;
    return 0;
}