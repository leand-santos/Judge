#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 2002)
            break;
        cout << "Senha Invalida" << endl;
    }
    cout << "Acesso Permitido" << endl;
    return 0;
}