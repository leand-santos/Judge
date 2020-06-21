#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n;
    cin >> n;
    double nota1, nota2, nota3;
    for (int i = 0; i < n; i++) {
        cin >> nota1 >> nota2 >> nota3;
        cout << fixed;
        cout.precision(1);
        cout << (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10 << endl;
    }
    return 0;
}