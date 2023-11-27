#include <bits/stdc++.h>
using namespace std;

bool cmp (pair<int, int> a, pair<int, int> b) {
  if (a.second < b.second)
    return true;
  return false;
}

int32_t main () {
  ios_base::sync_with_stdio (0);
  cin.tie (0);
  int n;
  cin >> n;
  vector<pair<int, int>> vp;
  pair<int, int> p;
  for (int i = 0; i < n; i++) {
    cin >> p.first >> p.second;
    vp.push_back (p);
  }
  sort (vp.begin (), vp.end (), cmp);
  int cnt = 1;
  int lst = vp[0].second;
  for (int i = 1; i < n; i++) {
    if (lst <= vp[i].first) {
      cnt++;
      lst = vp[i].second;
    }
  }
  cout << cnt << endl;
  return 0;
}