#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    double v, soma = 0;
    for (int i = 0; i < 6; i++) {
        cin >> v;
        if (v > 0)
            soma++;
    }
    cout << soma << " valores positivos" << endl;
    return 0;
}