#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > b)
            swap(a, b);
        if (c > d)
            swap(c, d);

        if ((a < c && c < b && b < d) || (c < a && a < d && d < b) || (a < c && d < b && b < c) || (c < a && b < d && d < a))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
