#include <iostream>
#include <vector>
// status:
// problem type: AD-HOC

using namespace std;

int ajust(int &j, int size) { return j - size; }

int main() {
    int NC, n, k;
    cin >> NC;
    for (int i = 0; i < NC; i++) {
        cin >> n >> k;
        vector<int> vet(n);
        for (int u = 0; u < vet.size(); u++)
            vet[u] = u + 1;

        int j = 0, kills = 0;
        while (kills < n - 1) {
            for (int l = 0; l < vet.size(); l++)
                cout << vet[l] << " ";
            cout << endl;

            kills++;
            j += k;
            if (j >= vet.size())
                j = ajust(j, vet.size());
            vet.erase(vet.begin() + j - 1);
        }
        cout << "J: " << j << endl << endl;
    }
    return 0;
}