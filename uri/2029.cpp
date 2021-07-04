#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std;

int main() {
    float V, D;
    while (cin >> V && cin >> D) {
        printf("ALTURA = %.2f\n", V / (3.14 * D / 2 * D / 2));
        printf("AREA = %.2f\n", (3.14 * D / 2 * D / 2));
    }
    return 0;
}