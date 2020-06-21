#include <iostream>
#include <vector>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    double n;
    vector<double> vet;
    for (int i = 0; i < 100; i++) {
        cin >> n;
        vet.push_back(n);
    }
    cout << fixed;
    cout.precision(1);
    for (int i = 0; i < vet.size(); i++)
        if (vet[i] <= 10)
            cout << "A[" << i << "] = " << vet[i] << endl;
    return 0;
}