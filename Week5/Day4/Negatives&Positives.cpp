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
    int n;
    cin >> n;
    vector<ll> a(n);
    ll neg = 0, ans = 0, mn = LLONG_MAX;
    fr
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            neg++;
        }
        ans += abs(a[i]);
        mn = min(mn, abs(a[i]));
    }
    if (neg % 2 != 0)
    {
        ans -= 2ll * mn;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}