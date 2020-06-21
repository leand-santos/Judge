#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int segundos, horas, minutos;
    cin >> segundos;
    horas = segundos / 3600;
    minutos = (segundos - horas * 3600) / 60;
    segundos -= horas * 3600 + minutos * 60;
    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}