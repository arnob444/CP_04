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
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        s.erase(unique(s.begin(), s.end()), s.end());
        if (s == "meow")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}