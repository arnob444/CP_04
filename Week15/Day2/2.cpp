#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define fr for (int i = 1; i < b; i++)

void solve()
{
    int a, b;
    cin >> a >> b;

    vector<int> arr(b);
    for (int i = 0; i < b; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int ans = a - arr.back();

    for (int i = 0; i < b - 1; i++)
        ans += (arr[i] - 1);

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
