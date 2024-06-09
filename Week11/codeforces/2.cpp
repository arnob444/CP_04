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
#define sz(x) (int)(x).size()


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s = to_string(n);
        if (n < 100)
        {
            if (n <= 18)
                cout << "Yes\n";
            else
                cout << "No\n";
            continue;
        }
        string s2;
        s2.push_back(s[0]);
        s2.push_back(s[1]);
        bool flag = true;
        if (stoi(s2) <= 19)
        {
            for (int i = 0; i < int(n); i++) flag &= s[i] != '0';
            flag &= s[sz(s) - 1] != '9';
        }
        else
            flag = false;
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}