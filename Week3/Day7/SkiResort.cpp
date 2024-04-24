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
    ll n, k, q, res = 0, ans = 0;
    cin >> n >> k >> q;
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        if (m <= q)
            ans++;
        else
            ans = 0;
        if (ans >= k)
            res = res + (ans - k + 1);
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