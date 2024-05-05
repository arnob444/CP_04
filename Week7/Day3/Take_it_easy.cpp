#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define fr for (int i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end(), greater<ll>());
    if (sum % n == 0)
    {
        ll flag = 0;
        sum /= n;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == sum)
            {
                flag = 1;
                cout << "Yes" << endl;
                break;
            }
            else if (v[i] > sum)
            {
                ans = v[i] - sum;
                if (ans % 2 == 0)
                {
                    v[i] -= ans;
                    v[i + 1] += ans;
                    ans = 0;
                }
                else
                {
                    flag = 1;
                    cout << "No" << endl;
                    break;
                }
            }
            else
            {
                flag = 1;
                cout << "No" << endl;
                break;
            }
        }
    }
    else
        cout << "No" << endl;
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