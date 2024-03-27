#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        ll sum = (k * (k - 1)) / 2;
        ll rem = n - k;
        ll mxSum = rem * (2 * x + rem - 1) / 2;

        if (sum < x && x <= sum + mxSum)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
