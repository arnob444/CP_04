#pragma GCC optimize("3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define endl    "\n"
#define ll      long long int
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    string a[n];
    bool ans[n];
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
        ans[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < a[i].size(); j++)
        {
            string s1 = "", s2 = "";
            for (int k = 0; k < j; k++)
            {
                s1 += a[i][k];
            }
            for (int k = j; k < a[i].size(); k++)
            {
                s2 += a[i][k];
            }

            if (st.find(s1) != st.end() and st.find(s2) != st.end())
            {
                ans[i] = 1;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    cout << endl;
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}