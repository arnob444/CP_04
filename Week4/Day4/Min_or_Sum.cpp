#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll res = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        res = res | a[i];
    }
    cout << res << endl;
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
