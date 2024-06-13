#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, k;
    cin >> n >> k;

    vector<int> v;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());

    if (k <= v.size())
        cout << v[k - 1] << endl;
    else
        cout << -1 << endl;

    return 0;
}