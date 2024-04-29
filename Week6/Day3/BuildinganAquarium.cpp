#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define fr for (int i = 0; i < n; i++)

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v;

    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    ll l = 0, r = 10000000005, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll tmp = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] < mid)
            {
                tmp += (mid - v[i]);
            }
        }
        if (tmp <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}