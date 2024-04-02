#pragma GCC optimize("3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long int ll;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] == 'R' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'P') || (a[i] == 'P' && b[i] == 'R'))
        {
            p1++;
        }
        else if ((b[i] == 'R' && a[i] == 'S') || (b[i] == 'S' && a[i] == 'P') || (b[i] == 'P' && a[i] == 'R'))
        {
            p2++;
        }
    }

    ll ans = 0;
    if (p1 < p2)
    {
        ans = p2 - p1;
    }
    cout << ans << endl;
}
int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}