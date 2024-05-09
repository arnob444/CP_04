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
        int ans = 0, res, h, x;
        if (n >= 4)
        {
            if (n % 4 == 0)
            {
                ans = n / 4; // 1
                cout << ans << endl;
            }
            else
            {
                ans = n / 4; // 1
                res = n % 4; // 0
                x = (res / 2) + ans;
                cout << x << endl;
            }
        }
        else
        {
            cout << n / 2 << endl;
        }
    }
    return 0;
}