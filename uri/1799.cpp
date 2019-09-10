#include <iostream>
#include <map>
#include <set>
#include <vector>
#define MAX_V 1001

using namespace std;

map<string, vector<string>> id;
set<string> aux;

int menor_Mov = MAX_V;
string achar;

bool existe(string chave, int indice) {
    if (id.count(chave)) {
        if (id[chave].size() <= indice) {
            return false;
        }
        return true;
    }
    return false;
}

bool solucao(string chave, int indice, int mov) {
    if (id[chave][indice] == "Saida" && mov < menor_Mov) {
        cout << mov << endl;
        menor_Mov = mov;
        return true;
    }
    return false;
}

void achaSaida(string chave, int indice, int mov) {
    if (!existe(chave, indice))
        return;
    if (solucao(chave, indice, mov))
        return;
    // cout << "Chave anterior: " << chave << endl;
    chave = id[chave][indice];
    // cout << "Nova Chave: " << chave << endl;
    for (int i = 0; i < id[chave].size(); i++)
        achaSaida(chave, i, mov + 1);
}

int main() {
    int n, m;
    string first, second;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> first >> second;
        id[first].push_back(second);
        aux.insert(first);
    }
    set<string>::iterator ite;
    for (ite = aux.begin(); ite != aux.end(); ++ite) {
        cout << *ite << "-> ";
        for (int i = 0; i < id[*ite].size(); i++)
            cout << id[*ite][i] << " ";
        cout << id[*ite].size();
        cout << endl;
    }

    achaSaida("Entrada", 0, 0);
    return 0;
}