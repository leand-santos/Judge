#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int rep, inter, gremio, total = 0, empates = 0, vInter = 0, vGremio = 0;
    do {
        cin >> inter >> gremio;
        if (inter > gremio)
            vInter++;
        else if (inter < gremio)
            vGremio++;
        else
            empates++;
        total++;
        do {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> rep;
        } while (rep != 1 && rep != 2);
    } while (rep == 1);
    cout << total << " grenais" << endl;
    cout << "Inter:" << vInter << endl;
    cout << "Gremio:" << vGremio << endl;
    cout << "Empates:" << empates << endl;
    if (vInter > vGremio)
        cout << "Inter venceu mais" << endl;
    else if (vInter < vGremio)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;
    return 0;
}