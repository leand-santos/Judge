#include <iostream>
#include <string>

// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    int n;
    string h1, h2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h1 >> h2;
        cout << "Caso #" << i + 1 << ": ";
        if (h1 == h2)
            cout << "De novo!" << endl;
        else if (h1 == "papel") {
            if (h2 == "pedra" || h2 == "Spock")
                cout << "Bazinga!" << endl;
            else
                cout << "Raj trapaceou!" << endl;
        } else if (h1 == "tesoura") {
            if (h2 == "papel" || h2 == "lagarto")
                cout << "Bazinga!" << endl;
            else
                cout << "Raj trapaceou!" << endl;
        } else if (h1 == "pedra") {
            if (h2 == "tesoura" || h2 == "lagarto")
                cout << "Bazinga!" << endl;
            else
                cout << "Raj trapaceou!" << endl;
        } else if (h1 == "lagarto") {
            if (h2 == "papel" || h2 == "Spock")
                cout << "Bazinga!" << endl;
            else
                cout << "Raj trapaceou!" << endl;
        } else if (h1 == "Spock") {
            if (h2 == "tesoura" || h2 == "pedra")
                cout << "Bazinga!" << endl;
            else
                cout << "Raj trapaceou!" << endl;
        }
    }
    return 0;
}