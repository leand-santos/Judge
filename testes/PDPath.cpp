#include <iostream>
#define MAX 1001
#define min(a, b) ((a) < (b) ? (a) : (b))
#define min3(a, b, c) ((a) < (b) ? min(a, c) : min(b, c))

using namespace std;

int verifica[MAX][MAX], mat[MAX][MAX], n, m, memo[MAX][MAX], menorSoma = MAX;
int vet[MAX];

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
bool solucao(int Y, int X) {
    if (X == 0 && memo[Y][X] < menorSoma) {
        menorSoma = memo[Y][X];
        cout << "Menor Soma:" << menorSoma << endl;
        return true;
    }
    return false;
}
void calculaMenorCaminho(int posY, int posX) {
    if (!existe(posY, posX))
        return;
    memo[posY][posX] = mat[posY][posX];
    vet[posX] = mat[posY][posX];
    if (solucao(posY, posX))
        return;
    if (verifica[posY][posX])
        return;
    verifica[posY][posX] = true;
    if (existe(posY, posX + 1))
        if (existe(posY + 1, posX + 1) && existe(posY - 1, posX + 1))
            memo[posY][posX] +=
                min3(memo[posY - 1][posX + 1], memo[posY][posX + 1],
                     memo[posY + 1][posX + 1]);
        else if (existe(posY + 1, posX + 1))
            memo[posY][posX] +=
                min(memo[posY][posX + 1], memo[posY + 1][posX + 1]);
        else
            memo[posY][posX] +=
                min(memo[posY][posX + 1], memo[posY - 1][posX + 1]);

    calculaMenorCaminho(posY - 1, posX - 1);
    calculaMenorCaminho(posY, posX - 1);
    calculaMenorCaminho(posY + 1, posX - 1);
    calculaMenorCaminho(posY + 1, posX);

    verifica[posY][posX] = false;
}

/*void topDown() {
    int menor = memo[0][0], X = 0, Y = 0;
    for (int i = 0; i < n; i++)
        if (memo[i][0] < menor) {
            menor = memo[i][0];
            Y = i;
        }
    cout << "soma: " << memo[Y][X] << endl;
    cout << mat[Y][X] << " ";
    for (int i = 0; i < m; i++)
        if (existe(Y,X+1))
}*/

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            verifica[i][j] = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    calculaMenorCaminho(0, m - 1);
    cout << "Memo:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << memo[i][j] << "\t";
        cout << endl;
    }

    return 0;
}