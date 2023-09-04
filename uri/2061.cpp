#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, m;
    string action;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> action;

        if (action == "fechou") {
            n += 1;
        } else if (action == "clicou") {
            n -= 1;
        }
    }
    
    cout << n << endl;

    return 0;
}