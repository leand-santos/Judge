#include <iostream>

using namespace std;
// status: Accepted
// problem type: Beginner

int main() {
    int number, hours;
    double salary;
    cin >> number >> hours >> salary;
    cout << "NUMBER = " << number << endl;
    printf("SALARY = U$ %.2lf\n", hours * salary);
    return 0;
}