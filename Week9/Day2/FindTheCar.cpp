#include <bits/stdc++.h>
using namespace std;
int n, k, q;
long long a[200005], b[200005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> q;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        a[0] = 0;
        for (int i = 1; i <= k; i++)
            cin >> b[i];
        for (int i = 1; i <= q; i++)
        {
            long long z;
            long long ans;
            cin >> z;
            int now = lower_bound(a, a + 1 + k, z) - a;
            if (a[now] == z)
            {
                cout << b[now] << " ";
                continue;
            }
            else
                ans = b[now - 1];
            ans += (z - a[now - 1]) * (b[now] - b[now - 1]) / (a[now] - a[now - 1]);
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}