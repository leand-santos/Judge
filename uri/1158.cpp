#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int soma = 0;
        cin >> x >> y;
        if (x % 2 == 0)
            x++;
        for (int j = 0; j < y; j++, x += 2)
            soma += x;
        cout << soma << endl;
    }
    return 0;
}