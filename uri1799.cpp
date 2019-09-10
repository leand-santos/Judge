#include <iostream>
#include <map>
#include <set>
#include <vector>
#define MAX_V 1001

using namespace std;

map<string, vector<string>> id;
set<string> aux;
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
            cout << id[*ite][i];
        cout << endl;
    }
    return 0;
}