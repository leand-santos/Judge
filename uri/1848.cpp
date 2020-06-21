#include <iostream>
#include <math.h>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    string info;
    int count = 0, result = 0;
    while (cin >> info && count != 3) {
        if (info == "caw") {
            cin >> info;
            count++;
            cout << result << endl;
            result = 0;
        } else {
            for (int i = 0, j = 2; i < 3; i++, j--) {
                if (info[i] == '*') {
                    result += pow(2, j);
                }
            }
        }
    }
    return 0;
}