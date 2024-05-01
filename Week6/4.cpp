#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define fr for (int i = 0; i < n; i++)

void solve()
{
    int n, k;
    cin >> n >> k;
    string s[n];
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        int cnt = 0, flag = 0;
        for (int j = 0; j < k; j++)
        {
            if (s[i][j] == '1')
            {
                cnt++;
                flag = j;
            }
        }
        if (cnt == 1)
        {
            st.insert(flag);
        }
    }
    if (st.size() == k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
