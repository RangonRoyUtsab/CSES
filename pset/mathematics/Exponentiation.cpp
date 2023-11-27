#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

ll bigMod (ll a, ll b, ll m) {
  if (b == 0)
    return 1 % m;
  ll x = bigMod (a, b / 2, m);
  x    = (x * x) % m;
  if (b % 2 == 1)
    x = (x * a) % m;
  return x;
}

int32_t main () {
  ios_base::sync_with_stdio (0);
  cin.tie (0);
  int test = 1;
  cin >> test;
  for (int tt = 1; tt <= test; tt++) {
    ll a, b;
    cin >> a >> b;
    cout << bigMod (a, b, mod) << endl;
  }
  return 0;
}