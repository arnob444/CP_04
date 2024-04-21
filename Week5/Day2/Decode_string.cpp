#include <bits/stdc++.h>
using namespace std;
#define endl            "\n"
#define ll              long long int
#define ON(n, k)        (n | (1 << k))
#define OFF(n, k)       (n & (~(1 << k)))
#define isON(n, k)      ((n >> k) & 1)
#define flip(n, k)      ((1 << k) ^ n)
#define fr for          (int i = 0; i < n; i++)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans;
    for (int i = n - 1; i > 0; i--)
    {
        if (s[i] != '0')
        {
            ans += (s[i] - '0' - 0 + 'a');
        }
        else
        {
            string res;
            res += s[i - 2];
            res += s[i - 1];
            int x = stoi(res);
            i -= 2;
            ans += ('a' + x - 0);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
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