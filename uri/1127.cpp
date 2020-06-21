#include <iostream>
#include <map>
#include <string>
#include <vector>
// status: Time limit exceeded
// problem type: AD-HOC

using namespace std;

map<string, int> idNotas;
void setID() {
    idNotas["C"] = idNotas["B#"] = 1;
    idNotas["C#"] = idNotas["Db"] = 2;
    idNotas["D"] = 3;
    idNotas["D#"] = idNotas["Eb"] = 4;
    idNotas["E"] = idNotas["Fb"] = 5;
    idNotas["F"] = idNotas["E#"] = 6;
    idNotas["F#"] = idNotas["Gb"] = 7;
    idNotas["G"] = 8;
    idNotas["G#"] = idNotas["Ab"] = 9;
    idNotas["A"] = 10;
    idNotas["A#"] = idNotas["Bb"] = 11;
    idNotas["B"] = idNotas["Cb"] = 12;
}
int nNotas1, nNotas2;
string notas1, notas2;
int main() {
    setID();
    while (true) {
        bool valida;
        int diferenca, last;
        string aux;
        cin >> nNotas1 >> nNotas2;
        if (nNotas1 == 0 && nNotas2 == 0)
            break;
        for (int i = 0; i < nNotas1; i++) {
            cin >> aux;
            if (i == 0)
                last = idNotas[aux];
            else {
                diferenca = idNotas[aux] - last;
                last = idNotas[aux];
                if (i == nNotas1 - 1)
                    notas1 += to_string(diferenca);
                else
                    notas1 += to_string(diferenca) + " ";
            }
        }
        cout << notas1 << endl;
        for (int i = 0; i < nNotas2; i++) {
            cin >> aux;
            if (i == 0)
                last = idNotas[aux];
            else {
                diferenca = idNotas[aux] - last;
                last = idNotas[aux];
                if (i == nNotas2 - 1)
                    notas2 += to_string(diferenca);
                else
                    notas2 += to_string(diferenca) + " ";
            }
        }
        cout << notas2 << endl;
        size_t found = notas1.find(notas2);
        if (found == std::string::npos)
            cout << "N" << endl;
        else
            cout << "S" << endl;
        notas1.clear();
        notas2.clear();
    }

    return 0;
}