#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n;
  cin >> n;

  if (2 <= n && n <= 3) {
    cout << "NO SOLUTION\n";
  } else if (n == 1) {
    cout << "1\n";
  } else if (n == 4) {
    cout << "3 1 4 2\n";
  } else {
    for (long long int i = 1; i <= n; i += 2) {
      cout << i << " ";
    }
    for (long long int i = 2; i <= n; i += 2) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}
