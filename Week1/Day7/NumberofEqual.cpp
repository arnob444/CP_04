#include <bits/stdc++.h>
typedef long long  ll;
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    ll ans = 0;
    while (l < n and r < m)
    {
        int c1 = 0, c2 = 0, curr = a[l];
        while (a[l] == curr and l < n)
        {
            c1++;
            l++;
        }
        while (curr > b[r] and r < m)
        {
            r++;
        }
        while (b[r] == curr and r < m)
        {
            c2++;
            r++;
        }
        ans += (1LL * c1 * c2);
    }
    cout << ans << '\n';
    return 0;
}
