#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n, counter = 0;
    while (cin >> n) {
        counter++;
        int q = 1;
        for (int i = 1; i <= n; i++) {
            q += i;
        }
        if (q == 1)
            printf("Caso %d: %d numero\n", counter, q);
        else
            printf("Caso %d: %d numeros\n", counter, q);
        cout << 0;
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < i; j++) {
                cout << " " << i;
            }
        }
        cout << endl << endl;
    }
    return 0;
}