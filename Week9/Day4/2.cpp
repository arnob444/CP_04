#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        vector<ll> s;
        while (x != 0)
        {
            if (x % 2 == 0)
            {
                s.push_back(0);
            }
            else if (x % 4 == 1 or x == 1)
            {
                s.push_back(1);
                x -= 1;
            }
            else
            {
                s.push_back(-1);
                x += 1;
            }
            x /= 2;
        }
        cout << s.size() << endl;
        for (ll i : s)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
