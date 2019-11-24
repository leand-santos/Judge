#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main()
{
    double money;
    int n, m;
    cin >> money;
    n = money;
    m = money * 100 - n * 100;
    cout << "NOTAS:" << endl;
    cout << n/100 << " nota(s) de R$ 100.00" << endl;
    n -= (n/100) * 100;
    cout << n/50 << " nota(s) de R$ 50.00" << endl;
    n -= (n/50) * 50;
    cout << n/20 << " nota(s) de R$ 20.00" << endl;
    n -= (n/20) * 20;
    cout << n/10 << " nota(s) de R$ 10.00" << endl;
    n -= (n/10) * 10;
    cout << n/5 << " nota(s) de R$ 5.00" << endl;
    n -= (n/5) * 5;
    cout << n/2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    n -= (n/2) * 2;
    cout << n << " moeda(s) de R$ 1.00" << endl;
    cout << m/50 << " moeda(s) de R$ 0.50" << endl;
    m -= (m/50) * 50;
    cout << m/25 << " moeda(s) de R$ 0.25" << endl;
    m -= (m/25) * 25;
    cout << m/10 << " moeda(s) de R$ 0.10" << endl;
    m -= (m/10) * 10;
    cout << m/5 << " moeda(s) de R$ 0.05" << endl;
    m -= (m/5) * 5;
    cout << m/1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}