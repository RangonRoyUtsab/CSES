#include <bits/stdc++.h>

#include <iostream>
using namespace std;

#define MAX 1000000007
using ll = long long int;

bool range_check(ll a, ll k, ll b) {
  if ((a - k) <= b && b <= (a + k)) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  ll n, m, k, temp, c = 0;
  cin >> n >> m >> k;
  vector<ll> a, b;

  for (ll i = 0; i < n; i++) {
    cin >> temp;
    a.push_back(temp);
  }
  sort(a.begin(), a.end());

  for (ll i = 0; i < m; i++) {
    cin >> temp;
    b.push_back(temp);
  }
  sort(b.begin(), b.end());

  for (ll i = 0, j = 0; i < n && j < m;) {
    if (b[j] < (a[i] - k))
      j++;
    else if (b[j] > (a[i] + k))
      i++;
    else
      i++, j++, c++;
  }
  cout << c << endl;

  return 0;
}
