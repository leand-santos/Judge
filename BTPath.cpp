#include <iostream>

using namespace std;

int n, m, mat[1001][1001], menorSoma = 1000, vet[1001];
bool verifica[1001][1001];

bool existe(int Y, int X) {
    if (X >= m || X < 0 || Y >= n || Y < 0)
        return false;
    return true;
}

void printaVet() {
    for (int i = 0; i < m; i++)
        cout << vet[i] << " ";
    cout << endl;
}

bool solucao(int Y, int X, int soma) {
    if (X == (m - 1) && soma < menorSoma) {
        menorSoma = soma;
        printaVet();
        cout << "soma: " << soma << endl;
        return true;
    } else if (soma >= menorSoma)
        return true;
    return false;
}

void calculaMenorCaminho(int posY, int posX, int soma) {
    if (!existe(posY, posX))
        return;
    soma += mat[posY][posX];
    vet[posX] = mat[posY][posX];
    if (solucao(posY, posX, soma))
        return;
    if (!verifica[posY - 1][posX + 1]) {
        verifica[posY - 1][posX + 1] = true;
        calculaMenorCaminho(posY - 1, posX + 1, soma);
        verifica[posY - 1][posX + 1] = false;
    }
    if (!verifica[posY][posX + 1]) {
        verifica[posY][posX + 1] = true;
        calculaMenorCaminho(posY, posX + 1, soma);
        verifica[posY][posX + 1] = false;
    }
    if (!verifica[posY + 1][posX + 1]) {
        verifica[posY + 1][posX + 1] = true;
        calculaMenorCaminho(posY + 1, posX + 1, soma);
        verifica[posY + 1][posX + 1] = false;
    }
    if (!verifica[posY + 1][posX]) {
        verifica[posY + 1][posX] = true;
        calculaMenorCaminho(posY + 1, posX, soma);
        verifica[posY + 1][posX] = false;
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            verifica[i][j] = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    calculaMenorCaminho(0, 0, 0);
    return 0;
}