#include <iostream>
#include <string>
// status: Não diferencia espaços de \n
// problem type: Strings

using namespace std;

int main() {
    string st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        std::string str(100, ' ');
        if (scanf("%*s", &str[0], str.size())) {
            cout << str << endl;
        }
        cout << str << endl;
    }
    return 0;
}