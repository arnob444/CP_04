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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll one = 0, zero = 0;
    for (ll i = 0; i < n; i++)
    {
        if(s[i] == '1')
            one++;
        else
            zero++;
    }
    ll ans = min(one, zero);
    if(ans % 2 == 0)
        cout << "Ramos" << endl;
    else
        cout << "Zlatan" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}