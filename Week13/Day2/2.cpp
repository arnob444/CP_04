#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int
#define ON(n, k)    (n | (1 << k))
#define OFF(n, k)   (n & (~(1 << k)))
#define isON(n, k)  ((n >> k) & 1)
#define flip(n, k)  ((1 << k) ^ n)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a / gcd(a, b)) * b)
#define fr          for (int i = 0; i < n; i++)

void solve()
{
    int n;
    ll l, r;
    cin >> n >> l >> r;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int maxRounds = 0;
    ll currsum = 0;
    int start = 0;

    for (int end = 0; end < n; ++end)
    {
        currsum += a[end];

        while (currsum > r && start <= end)
        {
            currsum -= a[start++];
        }

        if (currsum >= l && currsum <= r)
        {
            ++maxRounds;
            currsum = 0;
            start = end + 1;
        }
    }
    cout << maxRounds << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
