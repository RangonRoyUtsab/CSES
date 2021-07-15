#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, num, sum = 0;
    cin >> n;

    for (long long int i = 0; i < n-1; i++) {
        cin >> num;
        sum += num;
    }
    m = (n*n + n)*.5 - sum;
    cout << m << endl;
}