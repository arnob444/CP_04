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
    ll n, k;
    cin >> n >> k;
    ll arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + k);
    ll c = 0, ans = 0;
    for (int ii = k - 1; ii >= 0; ii--)
    {
        ll i = arr[ii];
        if (i <= c)
            break;
        ll d = n - i;
        c += d;
        ans++;
    }
    cout << ans << "\n";
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