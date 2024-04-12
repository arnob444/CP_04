#include <bits/stdc++.h>
#define ll long long int
#define endl "\n";
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        ll ans, cnt = 0;
        ans = x;

        while (ans > 1)
        {
            ans = ans / 2;
            cnt++;
        }

        ll tmp = pow(2, cnt);
        cout << x - tmp << " " << tmp << endl;
    }
}