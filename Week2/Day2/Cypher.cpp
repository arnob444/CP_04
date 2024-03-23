#pragma GCC optimize("3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[101];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            int l;
            string s;
            cin >> l;
            cin >> s;
            for (int j = 0; j < l; j++)
            {
                if (s[j] == 'D')
                {
                    a[i]++;
                    if (a[i] == 10)
                        a[i] = 0;
                }

                else
                {
                    a[i]--;
                    if (a[i] == -1)
                        a[i] = 9;
                }
            }
        }
        
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}