#include <iostream>
// status:
// problem type: Iniciante

using namespace std;

int main() {
    long long int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ho";
        if (i != n - 1)
            cout << " ";
    }
    cout << "!" << endl;
    return 0;
}