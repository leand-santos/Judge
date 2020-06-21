#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int inicio, fim, duracao;
    cin >> inicio >> fim;
    if (inicio == fim)
        duracao = 24;
    else if (inicio < fim)
        duracao = fim - inicio;
    else
        duracao = 24 - inicio + fim;
    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    return 0;
}