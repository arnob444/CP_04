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
    int a[1000000] = {0};
    for (int i = 2; i <= 1000000; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; i * j <= 1000000; j++)
            {
                a[i * j] = 1;
            }
        }
    }
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll x;
        cin >> x;
        ll ans = sqrt(x);

        if (x == 1)
            cout << "NO\n";
        else if (ans * ans == x and a[ans] == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}