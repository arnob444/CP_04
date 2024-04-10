#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "";
    int matching_pair = 0;
    int min_changable = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (s[l] == s[r])
        {
            matching_pair += 2;
        }
        else
        {
            min_changable++;
        }
        l++, r--;
    }

    for (int i = 0; i <= n; i++)
    {
        int total = i;
        total -= min_changable;
        if (total < 0)
        {
            ans.push_back('0');
            continue;
        }
        total = max((total % 2), total - matching_pair);
        total = max(0, total - (n % 2));

        if (total == 0)
        {
            ans.push_back('1');
        }
        else
        {
            ans.push_back('0');
        }
    }

    cout << ans << endl;
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