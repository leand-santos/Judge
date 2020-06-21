#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n1, n2, aux, soma = 0;
    cin >> n1 >> n2;
    if (n2 < n1) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    for (int i = n1 + 1; i < n2; i++)
        if (i % 2 != 0)
            soma += i;
    cout << soma << endl;
    return 0;
}