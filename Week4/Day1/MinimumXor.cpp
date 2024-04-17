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