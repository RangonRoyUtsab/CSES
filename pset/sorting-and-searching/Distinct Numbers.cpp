#include <bits/stdc++.h>
using namespace std;
 
using ll = long long int;
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  ll n, x;
  cin >> n;
  vector<ll> arr;
 
  for (ll i = 0; i < n; i++) {
    cin >> x;
    arr.push_back(x);
  }
  sort(arr.begin(), arr.end());
  ll sum = 1;
 
  for (ll i = 0; i < n - 1; i++) {
    if (arr[i] != arr[i + 1]) {
      sum++;
    }
  }
  cout << sum << endl;
 
  return 0;
}