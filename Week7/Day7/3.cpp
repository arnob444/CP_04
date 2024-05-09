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
#define fr for (int i = 0; i < n; i++)

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll left = arr[i];
        if (left == 1)
        {
            ans += n;
        }
        else
        {
            ll power = 1;
            for (int j = 1; j <= n; ++j)
            {
                if (power > LLONG_MAX / left)
                {
                    power = LLONG_MAX;
                    break;
                }
                power *= left;
                ll right = arr[j];
                if (power <= right)
                {
                    ans++;
                }
            }
        }
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