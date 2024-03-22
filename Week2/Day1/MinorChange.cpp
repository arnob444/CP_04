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
    string s1, s2;
    cin >> s1 >> s2;
    ll len1 = s1.length();
    ll len2 = s1.length();
    ll cnt = 0;
    for (int i = 0; i < len1; i++)
    {
        if (s1[i] != s2[i])
        {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}