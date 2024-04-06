#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll odd = 0, ans = 0;
    for (int i = 0; i < k; i++)
    {
        if (v[i] % 2 == 1)
            odd++;
    }

    if (odd > 0)
        ans++;
    for (int i = k; i < n; i++)
    {
        if (v[i - k] % 2 == 1)
            odd--;
        if (v[i] % 2 == 1)
            odd++;
        if (odd > 0)
            ans++;
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