#include <iostream>
#include <vector>
// status: Accepted
// problem type: AD-HOC

using namespace std;

int ajust(int &j, int size) {
    if (j < 0)
        return 0;
    else
        return j - size;
}

int main() {
    int NC, n, k;
    cin >> NC;
    for (int i = 0; i < NC; i++) {
        cin >> n >> k;
        vector<int> vet(n);

        for (int u = 0; u < vet.size(); u++)
            vet[u] = u;

        for (int j = k - 1; vet.size() != 1; j += k - 1) {
            while (j >= vet.size())
                j = ajust(j, vet.size());
            vet.erase(vet.begin() + j);
        }
        cout << "Case " << i + 1 << ": " << vet[0] + 1 << endl;
    }
    return 0;
}