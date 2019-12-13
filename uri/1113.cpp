#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int m, n;
    while (cin >> m >> n) {
        if (m == n)
            break;
        if (m < n)
            cout << "Crescente" << endl;
        else
            cout << "Decrescente" << endl;
    }
    return 0;
}