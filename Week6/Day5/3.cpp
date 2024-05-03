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
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n), brr(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    sort(arr.rbegin(), arr.rend());
    sort(brr.rbegin(), brr.rend());
    if (n + m < 11 or n < 4 or m < 4)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        ll sum = 0;
        for (int i = 0; i < 4; ++i)
        {
            sum += arr[i];
            sum += brr[i];
        }
        ll i = 4, j = 4;
        while (i < n and j < m and (i + j) < 11)
        {
            if (arr[i] > brr[j])
            {
                sum += arr[i];
                i++;
            }
            else
            {
                sum += brr[j];
                j++;
            }
        }
        while (i < n && (i + j) < 11)
        {
            sum += arr[i];
            i++;
        }
        while ((i + j) < 11 && j < m)
        {
            sum += brr[j];
            j++;
        }
        cout << sum << endl;
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