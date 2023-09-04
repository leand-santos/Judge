#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n = 1;
    string s1, s2;

    while (cin >> s1) {
        int count = 0, last = 0;
        cin >> s2;

        for (int i = 0; i <= s2.size() - s1.size(); i++) {
            if (s2.substr(i, s1.size()) == s1) {
                count++;
                last = i + 1;
            }
        }

        cout << "Caso #" << n << ":" << endl;

        if (count > 0) {
            cout << "Qtd.Subsequencias: " << count << endl;
            cout << "Pos: " << last << endl;
        } else {
            cout << "Nao existe subsequencia" << endl;
        }
        cout << endl;
        n++;
    }

    return 0;
}