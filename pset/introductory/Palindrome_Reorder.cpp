#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

bool comp(ll a, ll b) { return a > b; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string ss;
  getline(cin, ss);

  int arr[26];
  memset(arr, 0, sizeof(arr));
  int len = ss.length();

  for (int i = 0; i < len; i++) {
    arr[int(ss[i]) - 65]++;
  }
  int f = 0;
  vector<int> pos;

  for (int i = 0; i < 26; i++) {
    if (arr[i] % 2) {
      f++;
      pos.push_back(i);
    }
  }
  if ((len % 2 && (f > 1)) || (f > 1)) {
    cout << "NO SOLUTION\n";
  } else {
    string hans;
    for (int i = 0; i < 26; i++) {
      for (int j = 0; j < arr[i] / 2; j++) {
        hans += ('A' + i);
      }
    }
    string hans2 = hans;
    if (len % 2) hans2 += ('A' + pos[0]);

    sort(hans.begin(), hans.end(), greater<int>());

    hans2 += hans;

    cout << hans2 << endl;
  }

  return 0;
}