#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, play1, play2;
    string name1, name2, choice1, choice2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name1 >> choice1 >> name2 >> choice2;
        cin >> play1 >> play2;
        if ((play1 + play2) % 2 == 0) {
            if (choice1 == "PAR")
                cout << name1 << endl;
            else
                cout << name2 << endl;
        } else {
            if (choice1 == "IMPAR")
                cout << name1 << endl;
            else
                cout << name2 << endl;
        }
    }

    return 0;
}