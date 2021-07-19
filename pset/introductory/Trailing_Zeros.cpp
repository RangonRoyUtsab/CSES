#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

ll log5(ll n) {
  ll c = 0;
  while (n % 5 == 0) {
    c++;
    n = n / 5;
  }
  return c;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // freopen("in.txt", "r", stdin);
  // freopen("out.txt", "w", stdout);

  ll n, ans = 0;
  cin >> n;

  for (ll i = 5; i <= n; i += 5) {
    if (i % 5 == 0) {
      ans += log5(i);
    }
  }

  cout << ans << endl;
}
