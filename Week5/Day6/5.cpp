#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 1 || a[i] == 0 || (ans <= 1 && a[i] > 1))
                ans = (ans + a[i]) % mod;
            else
                ans = (ans * a[i]) % mod;
        }
        cout << ans << endl;
    }
    return 0;
}
