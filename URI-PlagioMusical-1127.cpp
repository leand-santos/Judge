#include <iostream>
#include <string>
#include <vector>
// Type: AD-HOC
// Status: Time limit exceeded

using namespace std;

int nNotas1, nNotas2;
int converteNum(string nota)
{
    for (int i = 0; i < nNotas1; i++)
    {
        if (nota == "C" || nota == "B#")
            return 1;
        else if (nota == "C#" || nota == "Db")
            return 2;
        else if (nota == "D")
            return 3;
        else if (nota == "D#" || nota == "Eb")
            return 4;
        else if (nota == "E" || nota == "Fb")
            return 5;
        else if (nota == "F" || nota == "E#")
            return 6;
        else if (nota == "F#" || nota == "Gb")
            return 7;
        else if (nota == "G")
            return 8;
        else if (nota == "G#" || nota == "Ab")
            return 9;
        else if (nota == "A")
            return 10;
        else if (nota == "A#" || nota == "Bb")
            return 11;
        else if (nota == "B" || nota == "Cb")
            return 12;
    }
}
vector<int> notas1, notas2;
int main()
{
    while (true)
    {
        bool valida, resultado = false;
        int diferenca;
        string aux;
        cin >> nNotas1 >> nNotas2;
        if (nNotas1 == 0 && nNotas2 == 0)
            break;

        for (int i = 0; i < nNotas1; i++)
        {
            cin >> aux;
            notas1.push_back(converteNum(aux));
        }

        for (int i = 0; i < nNotas2; i++)
        {
            cin >> aux;
            notas2.push_back(converteNum(aux));
        }

        for (int i = 0; i <= nNotas1 - nNotas2; i++)
        {
            valida = true;
            diferenca = notas1[i]- notas2[0];
            for (int j = 0; j < nNotas2; j++)
                if (notas1[i + j] - notas2[j] != diferenca)
                    valida = false;
            if (valida)
            {
                resultado = true;
                break;
            }
        }
        if (!resultado)
            cout << "N" << endl;
        else
            cout << "S" << endl;
        notas1.clear();
        notas2.clear();
    }

    return 0;
}