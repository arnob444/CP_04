#pragma GCC optimize("3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        // Build prefix sum
        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + arr[i];
        }
        
        while (q--)
        {
            ll r, l, k;
            cin >> l >> r >> k;
            ll sum = pref[n]; // Total sum
            sum -= (pref[r] - pref[l - 1]);
            sum += ((r - l + 1LL) * k);
            if (sum % 2LL == 1LL)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}