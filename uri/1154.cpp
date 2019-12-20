#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    double idade, qte = 0, soma = 0;
    while (cin >> idade) {
        if (idade < 0)
            break;
        soma += idade;
        qte++;
    }
    cout << fixed;
    cout.precision(2);
    cout << soma / qte << endl;
    return 0;
}