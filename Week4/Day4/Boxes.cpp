#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) ((n) | (1 << k))
#define OFF(n, k) ((n) & ~(1 << k))
#define isON(n, k) ((n) >> (k) & 1)
#define flip(n, k) ((1 << k) ^ n)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0, i = 0, j = n - 1;
    sort(a.rbegin(), a.rend()); // 6 5 4

    ll Xor = a[0]; // 6
    while (i < j)
    {
        if (Xor >= a[j])
        {
            Xor = (Xor ^ a[j]); // 2
            j--;
        }
        else
        {
            ans++; // 1
            Xor = a[i];
            i++;
        }
    }
    cout << ans + 1 << endl;
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