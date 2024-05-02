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
    int a, b;
    cin >> a >> b;
    string x, y;
    cin >> x >> y;
    int n = x.length();
    int m = y.length();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (x[i] == y[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << i << endl;
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