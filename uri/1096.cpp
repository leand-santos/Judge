#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int i = 1;
    for (int j = 7; i < 10; j--) {
        cout << "I=" << i << " J=" << j << endl;
        if (j == 5) {
            i += 2;
            j = 8;
        }
    }
    return 0;
}