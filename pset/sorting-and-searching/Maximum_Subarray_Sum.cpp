#include <bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  long long x, sm = 0, mx = 0;

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (i == 0) {
      mx = x;
      sm = x;
      continue;
    }
    sm = max(sm + x, x);
    mx = max(mx, sm);
  }
  cout << mx << endl;
  return 0;
}