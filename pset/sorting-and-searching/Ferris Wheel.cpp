#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, x;
  cin >> n >> x;
  vector<ll> pp(n);
  vector<bool> mm(n, 0);
  for (int i = 0; i < n; i++) cin >> pp[i];
  sort(pp.begin(), pp.end());

  ll ans = 0;
  for (int i = n - 1, j = 0; j <= i;) {
    if ((pp[i] + pp[j] <= x) && (i != j)) {
      mm[i] = 1;
      pp[j] = 1;
      i--;
      j++;
    } else {
      mm[i] = 1;
      i--;
    }
    ans++;
  }
  cout << ans << endl;

  return 0;
}