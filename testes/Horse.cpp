#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool visitado[8][8];
vector<pair<int, int>> path;
int peaoX, peaoY, cavaloX, cavaloY, menorNumMov = 800, vet[300][2];

bool existe(int X, int Y) {
    if (X >= 8 || Y >= 8 || X < 0 || Y < 0)
        return false;
    else
        return true;
}

void print_vector() {
    for (int i = 0; i < path.size(); i++)
        cout << path[i].first << path[i].second << " ";
    cout << endl;
}

void print_vetor(int n) {
    for (int i = 0; i <= n; i++)
        printf("%c%d ", vet[i][0] + 65, vet[i][1] + 1);
    cout << endl;
}

void caminho(int cX, int cY, int nMov) {

    vet[nMov][0] = cX;
    vet[nMov][1] = cY;

    if (!existe(cX, cY))
        return;

    if (cX == peaoX && cY == peaoY && nMov != menorNumMov) {
        vet[nMov][0] = peaoX;
        vet[nMov][1] = peaoY;
        print_vetor(nMov);
        menorNumMov = nMov;
        cout << "N = " << nMov << endl;
        return;
    }
    if (!visitado[cX + 1][cY + 2] && nMov < menorNumMov) {
        visitado[cX + 1][cY + 2] = true;
        caminho(cX + 1, cY + 2, nMov + 1);
        visitado[cX + 1][cY + 2] = false;
    }
    if (!visitado[cX + 1][cY - 2] && nMov < menorNumMov) {
        visitado[cX + 1][cY - 2] = true;
        caminho(cX + 1, cY - 2, nMov + 1);
        visitado[cX + 1][cY - 2] = false;
    }
    if (!visitado[cX - 1][cY + 2] && nMov < menorNumMov) {
        visitado[cX - 1][cY + 2] = true;
        caminho(cX - 1, cY + 2, nMov + 1);
        visitado[cX - 1][cY + 2] = false;
    }
    if (!visitado[cX - 1][cY - 2] && nMov < menorNumMov) {
        visitado[cX - 1][cY - 2] = true;
        caminho(cX - 1, cY - 2, nMov + 1);
        visitado[cX - 1][cY - 2] = false;
    }
    if (!visitado[cX + 2][cY + 1] && nMov < menorNumMov) {
        visitado[cX + 2][cY + 1] = true;
        caminho(cX + 2, cY + 1, nMov + 1);
        visitado[cX + 2][cY + 1] = false;
    }
    if (!visitado[cX + 2][cY - 1] && nMov < menorNumMov) {
        visitado[cX + 2][cY - 1] = true;
        caminho(cX + 2, cY - 1, nMov + 1);
        visitado[cX + 2][cY - 1] = false;
    }
    if (!visitado[cX - 2][cY + 1] && nMov < menorNumMov) {
        visitado[cX - 2][cY + 1] = true;
        caminho(cX - 2, cY + 1, nMov + 1);
        visitado[cX - 2][cY + 1] = false;
    }
    if (!visitado[cX - 2][cY - 1] && nMov < menorNumMov) {
        visitado[cX - 2][cY - 1] = true;
        caminho(cX - 2, cY - 1, nMov + 1);
        visitado[cX - 2][cY - 1] = false;
    }
}

void convert(string horse, string pawn) {
    if (horse[0] >= 97)
        cavaloX = horse[0] - 97;
    else
        cavaloX = horse[0] - 65;

    if (pawn[0] >= 97)
        peaoX = pawn[0] - 97;
    else
        peaoX = pawn[0] - 65;

    cavaloY = horse[1] - 49;
    peaoY = pawn[1] - 49;
}

int main() {
    string horse, pawn;
    cin >> horse;
    cin >> pawn;
    convert(horse, pawn);
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            visitado[i][j] = false;
    caminho(cavaloX, cavaloY, 0);
    return 0;
}