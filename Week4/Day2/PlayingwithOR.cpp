#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int
#define ON(n,k)     (n | (1 << k))
#define OFF(n,k)    (n & (~(1 << k)))
#define isON(n,k)   ((n >> k) & 1)
#define flip(n,k)   ((1 << k) ^ n)

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

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