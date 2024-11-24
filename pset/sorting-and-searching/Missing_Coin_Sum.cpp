#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define ed '\n'
#define all(x) x.begin(), x.end()
#define FRE                      \
  freopen("in.txt", "r", stdin); \
  freopen("in.txt", "w", stdout);
#define YES(f) cout << (f ? "YES" : "NO") << ed;

const int IMAX = 200005;
const long long INF = 1e18;

void solve(ll tt) {
  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++) cin >> x[i];
  sort(all(x));

  ll sum = 0, mn = 1;
  if (mn < x[0]) {  // corner case: if there is no 1
    cout << 1 << ed;
  } else {
    for (int i = 0; i < n; i++) {
      if (x[i] == mn) {
        sum += x[i];
      } else if (x[i] == mn + 1) {
        sum += x[i];
        mn = x[i];
      } else {
        if (sum < x[i] - 1) {  // the gap is too big to cover
          break;
        } else {
          sum += x[i];
          mn = x[i];
        }
      }
    }
    cout << sum + 1 << ed;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll test = 1;
  // cin >> test;
  for (ll tt = 1; tt <= test; tt++) solve(tt);
  return 0;
}