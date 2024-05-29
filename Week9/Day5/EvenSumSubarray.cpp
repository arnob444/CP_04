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
    cin >> n;
    vector<int> a(n);
    int ts = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        ts += a[i];
    }

    if (ts % 2 == 0)
    {
        cout << n << endl; 
    }
    else
    {
        bool flag = false;
        int leftOddIdx = -1, rightOddIdx = -1;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 != 0)
            {
                leftOddIdx = i;
                flag = true;
                break;
            }
        }

        for (int i = n - 1; i >= 0; --i)
        {
            if (a[i] % 2 != 0)
            {
                rightOddIdx = i;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << 0 << endl; 
        }
        else
        {
            int ans = max(n - 1 - leftOddIdx, rightOddIdx); 
            cout << ans << endl;
        }
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