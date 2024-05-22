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
    ll a, b, k;
    cin >> a >> b >> k;
    int ans = 0;
    while (1)
    {
        if (b % k == 0 and b / k >= a)
        {
            ans++;
            b = b / k;
        }
        else if (b % k == 0)
        {
            ans = ans + b - a;
            break;
        }
        else
        {
            ans = ans + b % k;
            b = b - b % k;
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