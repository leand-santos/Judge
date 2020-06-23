#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int p, n, memory, t;
    bool win = true;
    cin >> p >> n;
    for (int i = 0; i < n; i++) {
        if (i == 0)
            cin >> memory;
        else {
            cin >> t;
            if (t - memory > p || memory - t > p)
                win = false;
            memory = t;
        }
    }
    if (win)
        cout << "YOU WIN" << endl;
    else
        cout << "GAME OVER" << endl;

    return 0;
}