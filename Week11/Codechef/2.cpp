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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int store = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        store += abs(a[i] - a[i + 1]);
    }

    int ans = store;

    for (int i = 0; i < n; ++i)
    {
        if (i > 0)
        {
            int new_str = store - abs(a[i] - a[i - 1]) + abs(1 - a[i - 1]);
            if (i < n - 1)
            {
                new_str -= abs(a[i] - a[i + 1]);
                new_str += abs(1 - a[i + 1]);
            }
            ans = max(ans, new_str);
        }

        if (i < n - 1)
        {
            int new_str = store - abs(a[i] - a[i + 1]) + abs(k - a[i + 1]);
            if (i > 0)
            {
                new_str -= abs(a[i] - a[i - 1]);
                new_str += abs(k - a[i - 1]);
            }
            ans = max(ans, new_str);
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