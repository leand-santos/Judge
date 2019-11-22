#include <iostream>
#include <map>
#include <vector>
#define MAX 3000

using namespace std;

int nVertices;
map<string, int> id;
vector<int> grafo[3000];

bool adj(int n, int m) {
    for (int i = 0; i < grafo[n].size(); i++)
        if (m == grafo[n][i])
            return true;
    return false;
}

int convInt(string str, int &cont) {
    if (!id.count(str)) {
        id[str] = cont;
        cont++;
    }
    return id[str];
}

void pushGrafo(int a, int b) {
    if (!adj(a, b))
        grafo[a].push_back(b);
    if (!adj(b, a))
        grafo[b].push_back(a);
}
int main() {
    int cont = 0, nArestas;
    string first, second;
    scanf("%d %d", &nVertices, &nArestas);
    for (int i = 0; i < nVertices; i++) {
        cin >> first >> second;
        pushGrafo(convInt(first, cont), convInt(second, cont));
    }
    for (int i = 0; i < cont; i++) {
        cout << i << ": ";
        for (int j = 0; j < grafo[i].size(); j++)
            cout << grafo[i][j] << " ";
        cout << endl;
    }
    return 0;
}