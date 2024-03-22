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
    int n, x;
    cin >> n >> x;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        a.push_back(m);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != x)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}