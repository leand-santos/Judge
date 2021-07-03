#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n;
    float maxNote = 0, maxRegistration = 0, note, registration;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> registration >> note;
        if (maxNote < note) {
            maxNote = note;
            maxRegistration = registration;
        }
    }

    if (maxNote >= 8)
        cout << maxRegistration << endl;
    else
        cout << "Minimum note not reached" << endl;

    return 0;
}