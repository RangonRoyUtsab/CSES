#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, a, b;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        if ((a + b) % 3 == 0)
        {
            if (min(a, b) >= ((a + b) / 3.0))
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}