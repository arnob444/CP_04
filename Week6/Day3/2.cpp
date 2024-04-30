#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define fr for (int i = 0; i < n; i++)
const ll Large = 10e9;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);

    ll waste = Large;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] >= k)
        {
            waste = min(waste, v[i] % k);
        }
    }
    if (waste == Large)
        cout << -1 << endl;
    else
        cout << waste << endl;
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
