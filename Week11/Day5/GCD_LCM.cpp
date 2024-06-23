#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int
#define ON(n, k)    (n | (1 << k))
#define OFF(n, k)   (n & (~(1 << k)))
#define isON(n, k)  ((n >> k) & 1)
#define flip(n, k)  ((1 << k) ^ n)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a / gcd(a, b)) * b)
#define fr for      (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q, ans = 0, overlap;
    cin >> n >> a >> b >> p >> q;

    ans += (n / a) * p;
    ans += (n / b) * q;
    overlap = (n / lcm(a, b));
    ans -= (overlap * (p + q));
    ans += overlap * max(p, q);

    cout << ans << endl;
    return 0;
}