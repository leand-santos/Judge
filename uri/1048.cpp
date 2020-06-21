#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double salario, novoSalario, reajuste, percentual;
    cin >> salario;
    if (salario >= 0 && salario <= 400) {
        novoSalario = salario * 1.15;
        percentual = 15;
    } else if (salario > 400 && salario <= 800) {
        novoSalario = salario * 1.12;
        percentual = 12;
    } else if (salario > 800 && salario <= 1200) {
        novoSalario = salario * 1.10;
        percentual = 10;
    } else if (salario > 1200 && salario <= 2000) {
        novoSalario = salario * 1.07;
        percentual = 7;
    } else {
        novoSalario = salario * 1.04;
        percentual = 4;
    }
    reajuste = novoSalario - salario;
    cout << fixed;
    cout.precision(2);
    cout << "Novo salario: " << novoSalario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout.precision(0);
    cout << "Em percentual: " << percentual << " %" << endl;

    return 0;
}