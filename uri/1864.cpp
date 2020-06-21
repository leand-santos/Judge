#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    string text = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << text[i];
    }
    cout << endl;
    return 0;
}