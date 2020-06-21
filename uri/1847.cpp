#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int dia1, dia2, dia3;
    cin >> dia1 >> dia2 >> dia3;
    if (dia1 > dia2 && dia2 <= dia3)
        cout << ":)" << endl;
    else if (dia1 <= dia2 && dia2 >= dia3)
        cout << ":(" << endl;
    else if (dia1 < dia2 && dia2 < dia3 && dia3 - dia2 < dia2 - dia1)
        cout << ":(" << endl;
    else if (dia1 < dia2 && dia2 < dia3 && dia3 - dia2 >= dia2 - dia1)
        cout << ":)" << endl;
    else if (dia1 > dia2 && dia2 > dia3 && dia2 - dia3 < dia1 - dia2)
        cout << ":)" << endl;
    else if (dia1 > dia2 && dia2 > dia3 && dia2 - dia3 >= dia1 - dia2)
        cout << ":(" << endl;
    else if (dia1 == dia2 && dia2 < dia3)
        cout << ":)" << endl;
    else if (dia1 == dia2 && dia2 > dia3)
        cout << ":(" << endl;
    return 0;
}