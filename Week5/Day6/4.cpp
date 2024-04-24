#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll mx = a[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            ll tmp = (mx - a[i]) / k;
            a[i] = a[i] + (tmp * k);
        }
        ll mn = a[n - 1];
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, a[i]);
        }
        ll ans = mx - mn;
        sort(a.begin(), a.end());
        mx = a[n - 1];
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, mx - a[i]);
            mx = max(mx, a[i] + k);
        }
        cout << ans << "\n";
    }
    return 0;
}
