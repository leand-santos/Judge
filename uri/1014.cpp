#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main()
{
    int km;
    double l;
    cin >> km >> l;
    cout << fixed;
    cout.precision(3);
    cout << km/l << " km/l" << endl;
    return 0;
}