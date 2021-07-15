#include <bits/stdc++.h>
using namespace std;


void sol() {
    long long int x, y, r;
    cin >> y >> x;

    if ( x >= y) {
        if (x%2 == 1) {
            r = x*x - y + 1;
        }
        else {
            r = (x-1)*(x-1) + y;
        }
    }
    else {
        if (y%2 == 0) {
            r = y*y - x + 1;
        }
        else {
            r = (y-1)*(y-1) + x;
        }
    }
    cout << r << endl;
}

int main ()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    long long int test;
    cin >> test;

    while(test--) {
        sol();
    }
}