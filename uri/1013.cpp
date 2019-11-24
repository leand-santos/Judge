#include <iostream>
// status: Accepted
// problem type: Iniciante

int min(int a, int b)
{
    return (a + b + abs(a-b))/2;
}

using namespace std;

int main()
{
    int nA, nB, nC;
    cin >> nA >> nB >> nC;
    printf("%d eh o maior\n", min(min(nA, nB), nC));
    return 0;
}