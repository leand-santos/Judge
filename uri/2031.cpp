#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n;
    string j1, j2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> j1 >> j2;
        if (j1 == "ataque") {
            if (j2 == "pedra")
                cout << "Jogador 1 venceu" << endl;
            else if (j2 == "papel")
                cout << "Jogador 1 venceu" << endl;
            else if (j2 == "ataque")
                cout << "Aniquilacao mutua" << endl;
        } else if (j1 == "pedra") {
            if (j2 == "pedra")
                cout << "Sem ganhador" << endl;
            else if (j2 == "papel")
                cout << "Jogador 1 venceu" << endl;
            else if (j2 == "ataque")
                cout << "Jogador 2 venceu" << endl;
        } else if (j1 == "papel") {
            if (j2 == "pedra")
                cout << "Jogador 2 venceu" << endl;
            else if (j2 == "papel")
                cout << "Ambos venceram" << endl;
            else if (j2 == "ataque")
                cout << "Jogador 2 venceu" << endl;
        }
    }

    return 0;
}