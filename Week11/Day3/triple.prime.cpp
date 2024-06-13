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

const ll Max = 1e5 + 5;
vector<ll> v;
set<ll> s;
bitset<Max + 5> flag;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    flag.set();
    flag[0] = flag[1] = 0;
    for (ll i = 2; i <= sqrt(Max) + 2; i++)
    {
        if (flag[i])
        {
            v.push_back(i * i);
            s.insert(i * i);
            for (ll j = i * i; j <= Max; j += i)
                flag[j] = 0;
        }
    }
    for (ll i = sqrt(Max) + 3; i < Max; i++)
    {
        if (flag[i])
        {
            v.push_back(i * i);
            s.insert(i * i);
        }
    }

    while (t--)
    {
        ll tru;
        cin >> tru;
        ll colab = 4;
        bool found = false;
        for (auto army : v)
        {
            ll fight = tru - colab - army;
            if (s.count(fight) == 0)
                continue;
            if (colab != army and army != fight and colab != fight and colab + army + fight == tru)
            {
                cout << "Yes\n";
                found = true;
                break;
            }
        }
        if (!found)
            cout << "No\n";
    }
    return 0;
}
