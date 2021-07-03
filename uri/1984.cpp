#include <algorithm>
#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    string n;
    cin >> n;
    for (int i = 0; i < n.size() / 2; i++) {
        swap(n[i], n[n.size() - i - 1]);
    }
    cout << n << endl;
    return 0;
}