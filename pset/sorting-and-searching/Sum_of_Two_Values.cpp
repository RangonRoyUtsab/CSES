// I'm always wrong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x, y, z;
  cin >> n >> x;
  vector<pair<int, int>> a;
  for (int i = 1; i <= n; i++) {
    pii k;
    cin >> k.first;
    k.second = i;
    a.push_back(k);
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    y = a[i].first;
    int l = i, r = n, m;
    while (r - l > 1) {
      m = (l + r) / 2;
      z = y + a[m].first;
      if (z < x) {
        l = m;
      } else {
        r = m;
      }
    }
    if (y + a[l].first == x and a[i].second != a[l].second and
        a[r].second != 0) {
      cout << a[i].second << " " << a[l].second << endl;
      return 0;
    }
    if (y + a[r].first == x and a[i].second != a[r].second and
        a[r].second != 0) {
      cout << a[i].second << " " << a[r].second << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE\n";
  return 0;
}