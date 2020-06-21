#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    string name;
    int n, N;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> N;
        if (name == "Thor")
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }

    return 0;
}