#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n), ar;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++)
        {

            if (v[i] < 4)
            {
                ar.push_back(7 - v[i]);
            }
            else
            {
                ar.push_back(v[i]);
            }
        }
        int ans = 0;
        for (int i = k; i < n; i++)
        {
            ar.push_back(v[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans += ar[i];
        }

        cout << ans << endl;
    }
    return 0;
}