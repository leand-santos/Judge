#include <iostream>
#include <string>
// Type: Strings
// Status: Accepted

using namespace std;

int main() {
    bool valida;
    int numeroPosicoes = 0;
    string mensagem, palavra;
    cin >> mensagem >> palavra;
    for (int i = 0; i <= mensagem.length() - palavra.length(); i++) {
        valida = false;
        for (int j = 0; j < palavra.length(); j++)
            if (mensagem[i + j] == palavra[j])
                valida = true;
        if (!valida)
            numeroPosicoes++;
    }
    cout << numeroPosicoes << endl;
    return 0;
}
