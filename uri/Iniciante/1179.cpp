#include <iostream>
#include <vector>
// status: Accepted
// problem type: Iniciante

using namespace std;

vector<int> par, impar;

void printP() {
    for (int j = 0; j < par.size(); j++)
        cout << "par[" << j << "] = " << par[j] << endl;
    par.clear();
}
void printI() {
    for (int j = 0; j < impar.size(); j++)
        cout << "impar[" << j << "] = " << impar[j] << endl;
    impar.clear();
}

int main() {
    int n;
    for (int i = 0; i < 15; i++) {
        cin >> n;
        if (n % 2 == 0) {
            par.push_back(n);
            if (par.size() == 5) {
                printP();
            }
        } else {
            impar.push_back(n);
            if (impar.size() == 5)
                printI();
        }
    }
    printI();
    printP();
    return 0;
}