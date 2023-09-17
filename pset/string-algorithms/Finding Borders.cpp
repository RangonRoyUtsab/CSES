#include <bits/stdc++.h>
using namespace std;

vector<int> __Z(string s) {
  int n = (int)s.size();
  vector<int> z(n);
  int x = 0, y = 0;
  for (int i = 1; i < n; i++) {
    z[i] = max(0, min(z[i - x], y - i + 1));
    while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
      x = i;
      y = i + z[i];
      z[i]++;
    }
  }
  return z;
}

int main() {
  string s;
  cin >> s;
  vector<int> v = __Z(s);
  int n = (int)v.size();
  vector<int> vv;
  for (int i = 0; i < n; i++) {
    if (i + v[i] == n) vv.push_back(v[i]);
  }
  sort(vv.begin(), vv.end());
  for (auto x : vv) cout << x << " ";
  cout << '\n';
  return 0;
}
