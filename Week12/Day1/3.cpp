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

    string s;
    cin >> s;

    vector<int> a(m, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    string s2;
    cin >> s2;

    sort(s2.begin(), s2.end());

    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        mp[a[i]]++;
    }

    int over = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        over += it->second - 1;
    }

    s2 = s2.substr(0, m - over);

    int i = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        int pos = it->first;
        s[pos - 1] = s2[i];
        ++i;
    }

    cout << s << endl;
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