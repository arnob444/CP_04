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
    int n;
    string s;
    cin >> n >> s;

    bool digits = true, letter = true;
    char lastDigit = '0' - 1, lastLetter = 'a' - 1;
    bool isLetter = false, isStrong = true;

    for (char c : s)
    {
        if (isdigit(c))
        {
            if (c < lastDigit)
                digits = false;
            lastDigit = c;
        }
        else
        {
            if (c < lastLetter)
                letter = false;
            lastLetter = c;
            isLetter = true;
        }
        if (isLetter and isdigit(c))
            isStrong = false;
    }

    if (digits and letter and isStrong)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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