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
    int a, b, c;
    cin >> a >> b >> c;
    int d1 = abs(a - 1);
    int d2 = abs(b - c) + abs(c - 1);
    if (d1 < d2)
        cout << 1 << endl;
    else if (d1 > d2)
        cout << 2 << endl;
    else if (d1 == d2)
        cout << 3 << endl;
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