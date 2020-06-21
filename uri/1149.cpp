#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, a, soma = 0;
    cin >> a;
    while (cin >> n)
        if (n > 0)
            break;
    for (int i = 0; i < n; i++)
        soma += i + a;
    cout << soma << endl;
    return 0;
}