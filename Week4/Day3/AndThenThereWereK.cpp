#include <bits/stdc++.h>
using namespace std;
#define endl            "\n"
#define ll              long long int
#define ON(n, k)        ((n) | (1 << k))
#define OFF(n, k)       ((n) & ~(1 << k))
#define isON(n, k)      ((n) >> (k) & 1)
#define flip(n, k)      ((1 << k) ^ n)

void solve()
{
    int n;
    cin >> n;
    int ans = 1, final_ans = 0;
    while (ans <= n)
    {
        ans *= 2;
    }
    ans /= 2;
    ans--;
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