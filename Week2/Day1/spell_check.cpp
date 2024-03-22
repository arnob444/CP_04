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
        string tmp = "Timur";
        sort(tmp.begin(), tmp.end());
        if (n > 5 or n < 5)
            cout << "NO" << endl;
        else
        {
            sort(s.begin(), s.end());
            if (s == tmp)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}