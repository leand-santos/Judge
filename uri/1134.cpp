#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int n;
    int qAlcool = 0, qGasolina = 0, qDiesel = 0;
    do {
        do {
            cin >> n;
        } while (n < 1 || n > 4);
        if (n == 1)
            qAlcool++;
        else if (n == 2)
            qGasolina++;
        else if (n == 3)
            qDiesel++;
    } while (n != 4);
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << qAlcool << endl;
    cout << "Gasolina: " << qGasolina << endl;
    cout << "Diesel: " << qDiesel << endl;
    return 0;
}