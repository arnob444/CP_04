#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define fr for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }
    vector<int> can(n);
    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has = m;
        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = a[i];
            int t, z, y, total, can, remaining, curr;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);
            total = ((t * z) + y);
            can = (mid / total);
            remaining = mid % total;
            curr = ((can * z) + min(z, (remaining / t)));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }

        if (!has)
        {
            for (int i = 0; i < n; i++)
            {
                can[i] = may[i];
            }
        }
        return (!has);
    };

    int l = 0, r = 1e8, mid, ans;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
    for (auto val : can)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}