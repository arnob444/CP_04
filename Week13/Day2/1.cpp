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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a >= b and c <= d) or (b >= a and d <= c))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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