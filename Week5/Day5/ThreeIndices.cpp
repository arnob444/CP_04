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
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    int f = 0;
    for (int i = 2; i < n; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            cout << "YES\n";
            f = 1;
            cout << i - 1 << " " << i << " " << i + 1;
            break;
        }
    }
    if (!f)
    {
        cout << "NO";
    }
    cout << endl;
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