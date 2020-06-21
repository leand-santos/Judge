#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int v, par = 0, impar = 0, positivo = 0, negativo = 0;
    for (int i = 0; i < 5; i++) {
        cin >> v;
        if (v % 2 == 0)
            par++;
        else
            impar++;
        if (v > 0)
            positivo++;
        else if (v < 0)
            negativo++;
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}