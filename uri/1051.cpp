#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double salario, resultado = 0;
    cin >> salario;
    if (salario <= 2000)
        cout << "Isento" << endl;
    else {    
        salario -= 2000;
        if (salario >= 1000) {
            resultado += 1000 * 0.08;
        } else if (salario > 0)
            resultado += salario * 0.08;
        salario -= 1000;
        if (salario >= 1500) {
            resultado += 1500 * 0.18;
        } else if (salario > 0)
            resultado += salario * 0.18;
        salario -= 1500;
        if (salario > 0)
            resultado += salario * 0.28;
        cout << fixed;
        cout.precision(2);
        cout << "R$ " <<resultado << endl;
    }

    return 0;
}