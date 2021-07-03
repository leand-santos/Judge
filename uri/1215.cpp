#include <iostream>
#include <set>
// status: Accepted
// problem type: Data Structures and Libraries

using namespace std;

int main() {
    string word;
    set<string> dictionary;
    while (cin >> word) {
        string dictWord = "";
        for (int i = 0; i < word.size(); i++) {
            if ((int)word[i] <= 122 && (int)word[i] >= 97 ||
                (int)word[i] <= 90 && (int)word[i] >= 65) {
                dictWord += tolower(word[i]);
            } else if (dictWord.size()) {
                dictionary.insert(dictWord);
                dictWord = "";
            }
        }
        if (dictWord.size()) {
            dictionary.insert(dictWord);
            dictWord = "";
        }
    }
    for (auto it = dictionary.begin(); it != dictionary.end(); it++) {
        cout << (*it) << endl;
    }

    return 0;
}