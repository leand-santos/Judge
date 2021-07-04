#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    string n;
    while (cin >> n) {
        int hours = (int)n[0] - 48, minutes = ((int)n[2] - 48) * 10 + (int)n[3] - 48;
        int minutesDelay = hours * 60 + minutes - 7 * 60;
        if (minutesDelay > 0)
          cout << "Atraso maximo: " << minutesDelay << endl;
        else
          cout << "Atraso maximo: " << 0 << endl;
    }
    return 0;
}