#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 11; i++)
        cout << i << " x " << n << " = " << n * i << endl;
    return 0;
}