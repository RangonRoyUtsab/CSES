#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define ed '\n'
#define all(x) x.begin (), x.end ()
#define FRE                       \
  freopen ("in.txt", "r", stdin); \
  freopen ("in.txt", "w", stdout);
#define YES(f) cout << (f ? "YES" : "NO") << ed;

const int IMAX      = 200005;
const long long INF = 1e18;


int32_t main () {
  ios_base::sync_with_stdio (0);
  cin.tie (0);
  string s;
  cin >> s;
  sort (all (s));
  string t = s;
  vector<string> v;
  int k = 1;
  v.push_back (s);
  next_permutation (s.begin (), s.end ());
  while (s != t) {
    k++;
    v.push_back (s);
    next_permutation (all (s));
  }
  cout << k << endl;
  for (auto x : v)
    cout << x << endl;
  return 0;
}