#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double n1, n2, n3, n4, exam, media;
    cin >> n1 >> n2 >> n3 >> n4;
    cout << fixed;
    cout.precision(1);
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    cout << "Media: " << media << endl;
    if (media >= 7)
        cout << "Aluno aprovado." << endl;
    else if (media >= 5 && media <= 6.9) {
        cout << "Aluno em exame." << endl;
        cin >> exam;
        cout << "Nota do exame: " << exam << endl;
        if ((media + exam) / 2 >= 5)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        cout << "Media final: " << (media + exam) / 2 << endl;
    } else
        cout << "Aluno reprovado." << endl;

    return 0;
}