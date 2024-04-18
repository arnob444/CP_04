#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define fr for (int i = 0; i < n; i++)

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    fr
    {
        cin >> a[i];
    }

    ll ans = 0;
    priority_queue<ll> pq;
    fr
    {
        if (a[i] == 0)
        {
            if (pq.empty())
                continue;
            ans += pq.top();
            pq.pop();
        }
        else
        {
            pq.push(a[i]);
        }
    }
    cout << ans << endl;
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