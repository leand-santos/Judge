#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int month, day;
    int monthDays[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};

    while (cin >> month && cin >> day) {
        if (month == 12 && day == 25) {
            cout << "E natal!" << endl;
        } else if (month == 12 && day > 25) {
            cout << "Ja passou!" << endl;
        }  else if (month == 12 && day == 24) {
            cout << "E vespera de natal!" << endl;
        } else {
            int missingDays = 0;

            for (int i = 12; i > month; i--) {
                missingDays += monthDays[i - 1];
            }

            missingDays +=  monthDays[month - 1] - day;

            cout << "Faltam " << missingDays << " dias para o natal!" << endl;
        }
    }

    return 0;
}