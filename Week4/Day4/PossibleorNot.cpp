#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

void solve()
{
    int n, b;
    cin >> n >> b;
    int tmp = -1;
    // bool flag;
    while (n--)
    {
        // flag = false;
        int x;
        cin >> x;
        if ((x & b) == b)
        {
            tmp = tmp & x;
            // flag = true;
        }
    }
    if (tmp == b)
        // if (flag == true)
        cout << "YES\n";
    else
        cout << "NO\n";
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