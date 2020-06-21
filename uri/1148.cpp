#include <iostream>
#include <queue>
#include <vector>
// status:
// problem type: Graphs

using namespace std;

vector<int> grafo[1000];
int n, e;

bool hasDirectConnection(int node1, int node2) {
    for (int i = 0; i < e; i++) {
        if (grafo[i][0] == node2)
            if (grafo[i][1] == node1)
                return true;
    }
    return false;
}

void connectionTime(int node1, int node2) {
    priority_queue<pair<int, int>> heap;
}

int main() {
    int k, node1, node2, hours;
    while (cin >> n >> e) {
        if (n == 0 && e == 0)
            break;
        for (int i = 0; i < e; i++) {
            cin >> node1 >> node2 >> hours;
            grafo[i].push_back(node1);
            grafo[i].push_back(node2);
            grafo[i].push_back(hours);
        }
        for (int i = 0; i < e; i++) {
            for (int j = 0; j < grafo[i].size(); j++) {
                cout << grafo[i][j] << " ";
            }
            cout << endl;
        }

        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> node1 >> node2;
            if (hasDirectConnection(node1, node2))
                cout << 0 << endl;
            else {
                connectionTime(node1, node2);
            }
        }
        for (int i = 0; i < e; i++)
            grafo[i].clear();
        cout << endl;
    }
    return 0;
}