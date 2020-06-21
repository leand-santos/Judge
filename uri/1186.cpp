#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double result = 0, mat[12][12];
    char c;
    cin >> c;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> mat[i][j];
    for (int i = 0; i < 12; i++)
        for (int j = 12 - i; j < 12; j++)
            result += mat[i][j];
    if (c != 'S')
        result /= 66;
    cout << fixed;
    cout.precision(1);
    cout << result << endl;
    return 0;
}