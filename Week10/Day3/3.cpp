#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define fr for (ll i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    fr
    {
        cin >> v[i];
    }
    ll res = 0;
    set<ll> s;
    ll sum = 0;
    fr
    {
        s.insert(v[i]);
        sum += v[i];

        ll h = *s.rbegin();
        if (h == (sum - h))
        {
            res += 1;
        }
    }
    cout << res << endl;
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