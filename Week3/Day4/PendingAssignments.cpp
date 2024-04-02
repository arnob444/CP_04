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
    int x, y, z;
    cin >> x >> y >> z;
    z = z * 24 * 60;
    int tt = x * y;
    if (tt > z)
        cout << "NO\n";
    else
        cout << "YES\n";
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}