#include <iostream>
#include <vector>

using namespace std;

bool visitado[8][8];
vector<pair<int, int>> path;
int peaoX, peaoY, cavaloX, cavaloY, menorNumMov = 800;

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

void caminho(int cX, int cY, int nMov) {
    // path.push_back(make_pair(cX, cY));
    if (cX == peaoX && cY == peaoY && nMov != menorNumMov) {
        // print_vector();
        cout << "nmov: " << nMov << " " << endl;
        menorNumMov = nMov;
        cX = cavaloX;
        cY = cavaloY;
        nMov = 0;
        path.clear();
    }
    if (!visitado[cX + 1][cY + 2] && existe(cX + 1, cY + 2) &&
        nMov < menorNumMov) {
        path.push_back(make_pair(cX, cY));
        visitado[cX + 1][cY + 2] = true;
        caminho(cX + 1, cY + 2, nMov + 1);
        visitado[cX + 1][cY + 2] = false;
        path.pop_back();
    }
    if (!visitado[cX + 1][cY - 2] && existe(cX + 1, cY - 2) &&
        nMov < menorNumMov) {
        path.push_back(make_pair(cX, cY));
        visitado[cX + 1][cY - 2] = true;
        caminho(cX + 1, cY - 2, nMov + 1);
        visitado[cX + 1][cY - 2] = false;
        path.pop_back();
    }
    if (!visitado[cX - 1][cY + 2] && existe(cX - 1, cY + 2) &&
        nMov < menorNumMov) {
        path.push_back(make_pair(cX, cY));
        visitado[cX - 1][cY + 2] = true;
        caminho(cX - 1, cY + 2, nMov + 1);
        visitado[cX - 1][cY + 2] = false;
        path.pop_back();
    }
    if (!visitado[cX - 1][cY - 2] && existe(cX - 1, cY - 2) &&
        nMov < menorNumMov) {
        path.push_back(make_pair(cX, cY));
        visitado[cX - 1][cY - 2] = true;
        caminho(cX - 1, cY - 2, nMov + 1);
        visitado[cX - 1][cY - 2] = false;
        path.pop_back();
    }
    if (!visitado[cX + 2][cY + 1] && existe(cX + 2, cY + 1) &&
        nMov < menorNumMov) {
        path.push_back(make_pair(cX, cY));
        visitado[cX + 2][cY + 1] = true;
        caminho(cX + 2, cY + 1, nMov + 1);
        visitado[cX + 2][cY + 1] = false;
        path.pop_back();
    }
    if (!visitado[cX + 2][cY - 1] && existe(cX + 2, cY - 1) &&
        nMov < menorNumMov) {
        path.push_back(make_pair(cX, cY));
        visitado[cX + 2][cY - 1] = true;
        caminho(cX + 2, cY - 1, nMov + 1);
        visitado[cX + 2][cY - 1] = false;
        path.pop_back();
    }
    if (!visitado[cX - 2][cY + 1] && existe(cX - 2, cY + 1) &&
        nMov < menorNumMov) {
        path.push_back(make_pair(cX, cY));
        visitado[cX - 2][cY + 1] = true;
        caminho(cX - 2, cY + 1, nMov + 1);
        visitado[cX - 2][cY + 1] = false;
        path.pop_back();
    }
    if (!visitado[cX - 2][cY - 1] && existe(cX - 2, cY - 1) &&
        nMov < menorNumMov) {
        path.push_back(make_pair(cX, cY));
        visitado[cX - 2][cY - 1] = true;
        caminho(cX - 2, cY - 1, nMov + 1);
        visitado[cX - 2][cY - 1] = false;
        path.pop_back();
    }
}

int main() {

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            visitado[i][j] = false;
    path.push_back(make_pair(1, 1));
    path.push_back(make_pair(1, 1));
    path.pop_back();
    print_vector();
    cin >> cavaloX >> cavaloY;
    cin >> peaoX >> peaoY;
    caminho(cavaloX, cavaloY, 0);

    print_vector();
    return 0;
}