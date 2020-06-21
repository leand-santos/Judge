#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main()
{
    int dias, meses, anos;
    cin >> dias;
    anos = dias / 365;
    meses = (dias - anos * 365) / 30;
    dias -= anos * 365 + meses * 30;
    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
    return 0;
}