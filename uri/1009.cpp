#include <iostream>
#include <string>

using namespace std;
// status: Accepted
// problem type: Beginner

int main() {
    string vendedor;
    double salario, vendas;
    cin >> vendedor >> salario >> vendas;
    printf("TOTAL = R$ %.2lf\n", salario + vendas * 0.15);
    return 0;
}