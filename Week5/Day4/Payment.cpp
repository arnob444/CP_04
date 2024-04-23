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
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int mn = s / n;
        mn = min(mn, a);
        s = s - mn * n;
        if(s <= b){
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    return 0;
}