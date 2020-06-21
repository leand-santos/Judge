#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int tomada, total = 0;
    for (int i = 0; i < 4; i++) {
        cin >> tomada;
        total += tomada - 1;
    }
    cout << total + 1 << endl;
    return 0;
}