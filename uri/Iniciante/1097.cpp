#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int i = 1, k = 5;
    for (int j = 7; i < 10; j--) {
        cout << "I=" << i << " J=" << j << endl;
        if (j == k) {
            i += 2;
            j += 5;
            k = j - 3;
        }
    }
    return 0;
}