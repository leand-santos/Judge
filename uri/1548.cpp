#include <bits/stdc++.h>
#include <iostream>
// status: Accepted
// problem type: Estruturas e Bibliotecas

using namespace std;

int main() {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        int r = 0;
        vector<int> vet(m), org(m);
        for (int j = 0; j < m; j++) {
            cin >> vet[j];
            org[j] = vet[j];
        }
        sort(org.begin(), org.end(), greater<int>());
        for (int j = 0; j < m; j++) {
            if (org[j] == vet[j])
                r++;
        }
        cout << r << endl;
    }
    return 0;
}