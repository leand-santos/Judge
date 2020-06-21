#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int x, z, soma = 0, quant = 0;
    cin >> x;
    while (cin >> z)
        if (z > x)
            break;
    for (int i = x; soma <= z; i++, quant++)
        soma += i;
    cout << quant << endl;
    return 0;
}