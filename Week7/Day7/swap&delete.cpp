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
    string s;
    cin >> s;
    int one = 0, zero = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            zero++;
        else if (s[i] == '1')
            one++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            if (one > 0)
                one--;
            else
                break;
        }
        else if (s[i] == '1')
        {
            if (zero > 0)
                zero--;
            else
                break;
        }
    }
    cout << one + zero << endl;
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