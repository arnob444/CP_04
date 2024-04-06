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
    int Xor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        Xor = Xor ^ v[i];
    }

    int ans = Xor;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, Xor ^ v[i]);
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