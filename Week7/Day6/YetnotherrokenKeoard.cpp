#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int
#define ON(n, k)    (n | (1 << k))
#define OFF(n, k)   (n & (~(1 << k)))
#define isON(n, k)  ((n >> k) & 1)
#define flip(n, k)  ((1 << k) ^ n)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a * b) / gcd(a, b))
#define fr for      (int i = 0; i < n; i++)

void solve()
{
    string s;
    cin >> s;
    string ans = "";
    int b = 0, B = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
            b++;
        else if (s[i] == 'B')
            B++;
        else if (islower(s[i]))
        {
            if (b > 0)
                b--;
            else
                ans += s[i];
        }
        else if (isupper(s[i]))
        {
            if (B > 0)
                B--;
            else
                ans += s[i];
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