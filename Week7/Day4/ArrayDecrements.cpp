#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int
#define ON(n,k)     (n | (1 << k))
#define OFF(n,k)    (n & (~(1 << k)))
#define isON(n,k)   ((n >> k) & 1)
#define flip(n,k)   ((1 << k) ^ n)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a * b) / gcd(a, b))
#define fr          for (int i = 0; i < n; i++)

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    fr 
    {
        cin >> a[i];
    }
    fr
    {
        cin >> b[i];
    }

    int diff = -1, zero_diff = -1;
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < b[i])
        {
            
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