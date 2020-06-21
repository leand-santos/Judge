#include <iostream>
#include <string>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, m, TC = 0, TR = 0, TS = 0, Total;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m >> st;
        if (st == "C")
            TC += m;
        else if (st == "R")
            TR += m;
        else if (st == "S")
            TS += m;
    }
    Total = TC + TR + TS;
    cout << "Total: " << Total << " cobaias" << endl;
    cout << "Total de coelhos: " << TC << endl;
    cout << "Total de ratos: " << TR << endl;
    cout << "Total de sapos: " << TS << endl;
    cout << fixed;
    cout.precision(2);
    cout << "Percentual de coelhos: " << (double)TC * 100 / Total << " %"
         << endl;
    cout << "Percentual de ratos: " << (double)TR * 100 / Total << " %" << endl;
    cout << "Percentual de sapos: " << (double)TS * 100 / Total << " %" << endl;
    return 0;
}