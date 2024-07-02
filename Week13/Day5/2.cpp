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
    int srt = 2;
    int cnt = 0;
    for (int x = 2; x <= n; x++)
    {
        int curr = 0;
        for (int k = 1; k * x <= n; k++)
        {
            curr += k * x;
        }
        if (curr > cnt)
        {
            cnt = curr;
            srt = x;
        }
    }
    cout << srt << endl;
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