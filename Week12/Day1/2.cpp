#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define fr for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int ans = 0;
                bool flag = true;
                if (i - 1 >= 0)
                    ans = max(ans, a[i - 1][j]);
                if (j - 1 >= 0)
                    ans = max(ans, a[i][j - 1]);
                if (i + 1 < n)
                    ans = max(ans, a[i + 1][j]);
                if (j + 1 < m)
                    ans = max(ans, a[i][j + 1]);

                if (i - 1 >= 0 && a[i][j] <= a[i - 1][j])
                    flag = false;
                if (j - 1 >= 0 && a[i][j] <= a[i][j - 1])
                    flag = false;
                if (i + 1 < n && a[i][j] <= a[i + 1][j])
                    flag = false;
                if (j + 1 < m && a[i][j] <= a[i][j + 1])
                    flag = false;

                if (flag)
                    a[i][j] = ans;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}