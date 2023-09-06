#include <bits/stdc++.h>
using namespace std;

vector<int> __Z(string s) {
    int n = (int) s.size();
    vector<int> z(n);
    int x=0, y=0;
    for (int i=1; i<n; i++) {
        z[i] = max(0, min(z[i-x],y-i+1));
        while(i+z[i] < n && s[z[i]] == s[i+z[i]]) {
            x = i; y = i+z[i]; z[i]++;
        }
    }
    return z;
}

int main()
{
    string s, k;
    cin >> s >> k;
    string t = k + "$" +s;
    vector<int> v = __Z(t);
    int n = (int) v.size();
    int m = (int) k.size();
    int ans = 0;
    for (int i=0; i<n; i++) {
        if (v[i] == m) ans++;
    }
    cout << ans << endl;
    return 0;
}
