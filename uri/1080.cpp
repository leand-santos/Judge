#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int n, maior, pos = 0;
    for (int i = 0; i < 100; i++) {
        cin >> n;
        if (i == 0)
            maior = n;
        else if (n > maior) {
            maior = n;
            pos = i + 1;
        }
    }
    cout << maior << endl;
    cout << pos << endl;
    return 0;
}