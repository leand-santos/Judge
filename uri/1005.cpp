#include <iostream>

using namespace std;
// status: Accepted
// problem type: Iniciante

int main()
{
    double n1, n2, result;
    cin >> n1 >> n2;
    result = (n1 * 3.5 + n2 * 7.5)/11;
    printf("MEDIA = %.5lf\n", result);
    return 0;
}