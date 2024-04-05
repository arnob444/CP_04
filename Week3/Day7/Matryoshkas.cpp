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
    int arr[n];
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    sort(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        if (mp[arr[i]] != 0)
        {
            ans++;
            while (mp[val] > 0)
            {
                mp[val]--;
                val++;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}