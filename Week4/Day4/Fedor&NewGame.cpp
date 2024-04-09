#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << k))
#define isON(n, k) ((n) >> (k) & 1)
#define flip(n, k) ((1 << k) ^ n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m + 1);
    for (int i = 0; i <= m; i++)
        cin >> a[i];

    vector<vector<int>> all_mask;
    for (int mask = 0; mask <= m; mask++)
    {
        vector<int> v;
        for (int k = 0; k < n; k++)
        {
            if ((a[mask] >> k) & 1)
                v.push_back(1);
            else
                v.push_back(0);
        }
        all_mask.push_back(v);
    }

    int ans = 0;
    vector<int> fedor_mask = all_mask[m];         // laster er value ta fedor er
    for (int i = 0; i < all_mask.size() - 1; i++) // laster ta bade baki gula
    {
        vector<int> v = all_mask[i];
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (fedor_mask[k] != v[k])
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << endl;
    return 0;
}