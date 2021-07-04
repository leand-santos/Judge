#include <iostream>
// status: Accepted
// problem type: Beginner

using namespace std; 

int main() {
  int n, m, sum = 0;
  cin >> n;
  for (int i = 0; i < 5; i++)
  {
    cin >> m;
    if (m == n)
      sum++;
  }
  cout << sum << endl;
  return 0;
}