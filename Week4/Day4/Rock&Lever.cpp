#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[__lg(x)]++; // Last set bit e 1 kon position e ache seta indentify kore
        }
        // Time complexity : __lg() = O(1)

        long long ans = 0;
        for (auto [x, y] : mp)
        {
            ans += (1LL * y * (y - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define endl            "\n"
// #define ll              long long int
// #define ON(n, k)        ((n) | (1 << k))
// #define OFF(n, k)       ((n) & ~(1 << k))
// #define isON(n, k)      ((n) >> (k) & 1)
// #define flip(n, k)      ((1 << k) ^ n)

// ll BitSize(ll k)
// {
//     int cnt = 0;
//     ll d = 1;
//     while (k != 0)
//     {
//         cnt++;
//         k = k >> d;
//     }
//     return cnt;
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<ll> arr(n), binary(n);
//     map<ll, ll> mp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         binary[i] = BitSize(arr[i]);
//         mp[binary[i]]++;
//     }

//     ll tt = 0, p;
//     map<ll, ll>::iterator it;
//     for (it = mp.begin(); it != mp.end(); it++)
//     {
//         p = it->second;
//         tt += (p * (p - 1)) / 2;
//     }

//     cout << tt << endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }