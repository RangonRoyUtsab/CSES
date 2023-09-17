#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n, i, r = 1, m = 1000000007;
  cin >> n;

  for (i = 1; i <= n; i++) {
    r = (r * 2) % m;
  }
  cout << r << endl;
}