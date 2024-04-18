#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k)        (n | (1 << k))
#define OFF(n, k)       (n & (~(1 << k)))
#define isON(n, k)      ((n >> k) & 1)
#define flip(n, k)      ((1 << k) ^ n)
#define fr(i, n)        for (int i = 0; i < n; i++)
void solve()
{
    int aa, bb;
    cin >> aa >> bb;

    int a = aa, b = bb;
    int reverse = 0, remainder;
    int reverse1 = 0, remainder1;

    while (a != 0)
    {
        remainder = a % 10;
        reverse = reverse * 10 + remainder;
        a /= 10;
    }

    while (b != 0)
    {
        remainder1 = b % 10;
        reverse1 = reverse1 * 10 + remainder1;
        b /= 10;
    }

    bool flag = false;
    if (aa > bb or aa > reverse1 or reverse > bb or reverse > reverse1)
        flag = true;

    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
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