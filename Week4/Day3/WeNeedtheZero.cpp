#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int Xor = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        Xor ^= v[i];
    }

    if (n % 2 == 0 and Xor != 0)
        cout << -1 << endl;
    else
        cout << Xor << endl;

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