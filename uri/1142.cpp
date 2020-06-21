#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int n, j = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << j++ << " " << j++ << " " << j++ << " PUM" << endl;
        j++;
    }
    return 0;
}