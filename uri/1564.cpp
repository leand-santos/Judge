#include <iostream>
// status: Accepted
// problem type: Iniciante

using namespace std;

int main() {
    int n;
    while (cin >> n)
        if (n == 0)
            cout << "vai ter copa!" << endl;
        else
            cout << "vai ter duas!" << endl;
    return 0;
}