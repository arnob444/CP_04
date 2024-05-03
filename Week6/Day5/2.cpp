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
    int n, m;
    cin >> n >> m;
    if (n + m < 11 or n < 4 or m < 4)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        vector<int> a(n), b(m), c(n + m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // sort(a.rbegin(), a.rend());
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        // sort(b.rbegin(), b.rend());

        for (int i = 0; i < n; i++)
        {
            c[i] = a[i];
        }
        for (int i = 0; i < m; i++)
        {
            c[n + i] = b[i];
        }
        
        sort(c.rbegin(), c.rend());
        int sum = 0;
        for (int i = 0; i < 11; i++)
        {
            sum += c[i];
        }

        cout << sum << endl;
    }
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
