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
    int a, b;
    cin >> a >> b;

    int minA = a;
    int maxA = a + 2;
    int minB = b;
    int maxB = b + 1;

    bool flag = false;
    for (int i = minA; i <= maxA; i++) // 1 - 3
    {
        for (int j = minB; j <= maxB; j++) // 2 - 3
        {
            if (i == j)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            break;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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