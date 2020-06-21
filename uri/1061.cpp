#include <iostream>
#include <string>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int days[2], hours[2], minutes[2], seconds[2], startT = 0, endT = 0, r;
    string st;
    for (int i = 0; i < 3; i++)
        cin >> st >> days[i] >> hours[i] >> st >> minutes[i] >> st >>
            seconds[i];

    startT += seconds[0] + 60 * minutes[0] + 3600 * hours[0] + 86400 * days[0];
    endT += seconds[1] + 60 * minutes[1] + 3600 * hours[1] + 86400 * days[1];

    r = endT - startT;
    cout << r / 86400 << " dia(s)" << endl;
    r -= 86400 * (r / 86400);

    cout << r / 3600 << " hora(s)" << endl;
    r -= 3600 * (r / 3600);

    cout << r / 60 << " minuto(s)" << endl;
    r -= 60 * (r / 60);

    cout << r << " segundo(s)" << endl;

    return 0;
}