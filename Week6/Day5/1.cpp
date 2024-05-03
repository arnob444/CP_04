#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int
#define ON(n,k)     (n | (1 << k))
#define OFF(n,k)    (n & (~(1 << k)))
#define isON(n,k)   ((n >> k) & 1)
#define flip(n,k)   ((1 << k) ^ n)
#define fr          for (int i = 0; i < n; i++)

void solve()
{
    int x;
    cin >> x;
    int d = 100 - x;  // 34
    if (d <= 0)
        cout << 0 << endl;
    else
        cout << (d / 10) * 10 << endl;
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