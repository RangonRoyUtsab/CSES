#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    long long int i, len = s.length(), count = 0, a = 0, c = 0, g = 0, t = 0;

    for (i = 0; i < len; )
    {
        if (s[i] == 'A')
        {
            while (s[i] == 'A')
            {
                count++;
                i++;
            }
            if (count > a)
                a = count;
        }
        else if (s[i] == 'C')
        {
            while (s[i] == 'C')
            {
                count++;
                i++;
            }
            if (count > c)
                c = count;
        }
        else if (s[i] == 'G')
        {
            while (s[i] == 'G')
            {
                count++;
                i++;
            }
            if (count > g)
                g = count;
        }
        else if (s[i] == 'T')
        {
            while (s[i] == 'T')
            {
                count++;
                i++;
            }
            if (count > t)
                t = count;
        }
        count = 0;
    }

    if (a >= c && a >= g && a >= t)
    {
        cout << a << endl;
    }
    else if (c >= a && c >= g && c >= t)
    {
        cout << c << endl;
    }
    else if (g >= a && g >= c && g >= t)
    {
        cout << g << endl;
    }
    else
    {
        cout << t << endl;
    }

    return 0;
}