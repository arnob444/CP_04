#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int
#define ON(n,k)     ((n)|(1<<k))
#define OFF(n,k)    ((n)& ~(1<<k))
#define isON(n,k)   ((n)>>(k) & 1)
#define flip(n,k)   ((1<<k)^n)

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = -1;
    for (int i = 0; i < n; i++)
    {
        cnt = a[i] & cnt;
    }

    cout << cnt << endl;
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