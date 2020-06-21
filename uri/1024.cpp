#include <bits/stdc++.h>
#include <iostream>
// status: Accepted
// problem type: Strings

using namespace std;

int main() {
    string str;
    int n;
    cin >> n;
    getline(cin, str);
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        for (int j = 0; j < str.length(); j++) {
            if ((str[j] >= 65 && str[j] <= 90) ||
                (str[j] >= 97 && str[j] <= 122))
                str[j] += 3;
        }

        reverse(str.begin(), str.end());

        for (int j = str.length() / 2; j < str.length(); j++)
            str[j]--;

        cout << str << endl;
    }
    return 0;
}