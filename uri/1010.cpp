#include <iostream>

using namespace std;
// status: Accepted
// problem type: Beginner

int main() {
    int codigo, numero;
    double valor, resultado = 0;
    for (int i = 0; i < 2; i++) {
        cin >> codigo >> numero >> valor;
        resultado += valor * numero;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", resultado);
    return 0;
}