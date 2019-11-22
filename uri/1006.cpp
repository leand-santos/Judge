#include <iostream>

using namespace std;
// status: Accepted
// problem type: Iniciante

int main()
{
    double nA, nB, nC, result;
    cin >> nA >> nB >> nC;
    result = (nA * 2 + nB * 3 + nC * 5) / 10;
    printf("MEDIA = %.1lf\n", result);
    return 0;
}