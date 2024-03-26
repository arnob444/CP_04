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
        int l = 0, r = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                r++;
            else if(r > 0)
                r--;
        }
        cout << r << endl;
    }
    return 0;
}