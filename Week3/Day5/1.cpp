#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mx = 0;
        int mn = 0;
        int curr = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= l && a[i] <= r)
            {
                curr++;
            }
            else
            {
                curr--;
            }

            mx = max(mx, curr);
            mn = min(mn, curr);
        }
        cout << mx << " " << mn << endl;
    }
    return 0;
}
