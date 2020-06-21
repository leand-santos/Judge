#include <iostream>
#include <math.h>
// status: Accepted
// problem type: Beginner

using namespace std;

void achaMaior(double &A, double &B, double &C) {
    double aux;
    if (B > C && B > A) {
        aux = B;
        B = A;
        A = aux;
    } else if (C > A && C > B) {
        aux = C;
        C = A;
        A = aux;
    }
}

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    achaMaior(A, B, C);

    if (A >= B + C)
        cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if (pow(A, 2) == pow(B, 2) + pow(C, 2))
            cout << "TRIANGULO RETANGULO" << endl;
        else if (pow(A, 2) > pow(B, 2) + pow(C, 2))
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else if (pow(A, 2) < pow(B, 2) + pow(C, 2))
            cout << "TRIANGULO ACUTANGULO" << endl;
        if (A == B && A == C)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if (A == B || B == C || C == A)
            cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}