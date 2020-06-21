#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int h1, m1, h2, m2, tMin = 0, tH = 0;
    cin >> h1 >> m1 >> h2 >> m2;
    m1 += h1 * 60;
    m2 += h2 * 60;
    if (m1 == m2)
        tH = 24;
    else {
        if (m1 < m2)
            tMin = m2 - m1;
        else if (h1 > h2)
            tMin = 1440 - m1 + m2;
    }
    tH += tMin / 60;
    if (tMin >= 60)
        tMin -= tH * 60;
    cout << "O JOGO DUROU " << tH << " HORA(S)"
         << " E " << tMin << " MINUTO(S)" << endl;
    return 0;
}