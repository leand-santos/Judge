#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    long long int n;
    while (cin >> n) {
        if (n == 0)
            break;
        long long int soma = 0;
        if (n % 2 == 1 || n % 2 == -1)
            n++;
        for (int j = 0; j < 5; j++, n += 2)
            soma += n;
        cout << soma << endl;
    }
    return 0;
}