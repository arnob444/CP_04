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

void solve()
{
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    int flag = 0;
    while (flag < n)
    {
        if (s[flag] == s[flag + 1])
        {
            flag += 2;
            cnt++;
        }
        else
            flag++;
    }
    cout << n - cnt << endl;

    // set<char> s;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    //     s.insert(v[i]);
    // }
    // int len = s.size();
    // cout << len << endl;
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
