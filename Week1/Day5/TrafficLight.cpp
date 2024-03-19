#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string x, s;
        cin >> x >> s;
        s += s;
        ll cnt = 0, res = 0;
        bool flag = false;
        if (x[0] == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'g')
            {
                res = max(res, cnt);
                flag = false;
            }
            if (s[i] == x[0] and flag == false)
            {
                flag = true;
                cnt = 0;
            }

            if (flag == true)
            {
                cnt++;
            }
        }
        cout << res << endl;
    }
    return 0;
}