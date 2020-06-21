#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double nA, nB, nC;
    cin >> nA >> nB >> nC;
    printf("TRIANGULO: %.3lf\n", (nA * nC) / 2);
    printf("CIRCULO: %.3lf\n", 3.14159 * nC * nC);
    printf("TRAPEZIO: %.3lf\n", ((nA + nB) * nC) / 2);
    printf("QUADRADO: %.3lf\n", nB * nB);
    printf("RETANGULO: %.3lf\n", nA * nB);
    return 0;
}