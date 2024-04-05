#pragma GCC optimize("3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define endl    "\n"
#define ll      long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> reduce;
    ll total = 0;
    int minChange = 0;

    for (int i = 0; i < n; i++)
    {
        ll l = i;
        ll r = n - i - 1;
        if (s[i] == 'L')
        {
            if (r > l)
            {
                minChange++;
                total += r;
                reduce.push_back(r - l);
            }
            else
            {
                total += l;
            }
        }
        else
        {
            if (l > r)
            {
                minChange++;
                reduce.push_back(l - r);
                total += l;
            }
            else
            {
                total += r;
            }
        }
    }

    vector<ll> ans(n + 1);
    for (int i = minChange; i <= n; i++)
    {
        ans[i] = total;
    }

    sort(reduce.begin(), reduce.end(), greater<ll>());

    for (int i = minChange - 1; i >= 1; i--)
    {
        total -= reduce.back();
        reduce.pop_back();
        ans[i] = total;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    fastIO();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}