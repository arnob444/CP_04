#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define fr for (int i = 0; i < n; i++)

void solve()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int min_dis = m;
    for (int i = 0; i <= n - m; i++)
    {
        int curr_dis = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i + j] != b[j])
            {
                curr_dis++;
            }
        }

        min_dis = min(min_dis, curr_dis);
    }
    cout << min_dis << endl;
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