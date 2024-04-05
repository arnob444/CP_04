#pragma GCC optimize("3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int Xor = 0;
    for (int i = 0; i < n; i++)
    {
        Xor = Xor ^ v[i];
    }

    int ans = Xor;
    int p;

    for (int i = 0; i < n; i++)
    {
        p = Xor ^ v[i];
        ans = min(ans, p);
    }
    cout << ans << endl;
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