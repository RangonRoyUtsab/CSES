#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, i, num, prev, moves = 0;
    cin >> n;
    vector<long long int> x;

    for (i = 0; i < n; i++)
    {
        cin >> num;

        if (i == 0)
        {
            prev = num;
        }
        else if (num < prev)
        {
            moves += (prev - num);
        }
        else {
            prev = num;
        }
        
    }

    cout << moves << endl;

    return 0;
}