#pragma GCC optimize("3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    int a[100][100];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int s = a[1][1];
    if (s != a[2][1])
    {
        s = a[3][1];
    }
    cout << s << " ";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[i][1] != s)
            {
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}