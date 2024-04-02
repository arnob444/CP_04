#pragma GCC optimize("3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define endl "\n"
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
    int x, y;
    cin >> x >> y;
    int ans = 7 - (x + y);
    cout << ans << endl;
    return 0;
}