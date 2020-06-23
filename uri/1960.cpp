#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int n;
string romanNumeral;

void convert(int number, string symbol1, string symbol2, int next) {
    while (n >= number) {
        if (n - next >= 0) {
            n -= next;
            romanNumeral += symbol2;
        } else {
            n -= number;
            romanNumeral += symbol1;
        }
    }
}

int main() {
    cin >> n;
    convert(500, "D", "CM", 900);
    convert(100, "C", "CD", 400);
    convert(50, "L", "XC", 90);
    convert(10, "X", "XL", 40);
    convert(5, "V", "IX", 9);
    convert(1, "I", "IV", 4);
    cout << romanNumeral << endl;
    return 0;
}