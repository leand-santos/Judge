#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    for (int j = 1, i = 0; i <= 20; j++) {
        cout << "I=" << (double)i / 10 << " J=" << (double)j + ((double)i / 10)
             << endl;
        if (j == 3) {
            j = 0;
            i += 2;
        }
    }
    return 0;
}