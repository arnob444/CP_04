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
#define fr for (int i = 0; i < 16; i++)

void solve()
{
    vector<pair<int, int>> v(16);
    fr
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());

    vector<int> res(16);
    fr
    {
        if (i == 0)
            res[v[i].second] = 0;
        else if (i <= 2)
            res[v[i].second] = 1;
        else if (i <= 6)
            res[v[i].second] = 2;
        else if (i <= 14)
            res[v[i].second] = 3;
        else
            res[v[i].second] = 4;
    }

    fr
    {
        cout << res[i] << " ";
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