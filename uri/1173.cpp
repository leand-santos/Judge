#include <iostream>
#include <math.h>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < 10; i++)
        cout << "N[" << i << "] = " << a * pow(2, i) << endl;
    return 0;
}