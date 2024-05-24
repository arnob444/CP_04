#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int check = 0;
        for (int i = 0; i <= m.size() + 1; i++)
        {
            if (m[i] == 0)
            {
                cout << i << endl;
                break;
            }
            else if (m[i] == 1 && check == 0)
            {
                check = 1;
            }
            else if (m[i] == 1 && check == 1)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}