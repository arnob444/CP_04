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
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    while (a <= b)
    {
        a *= 2;
        if (a <= b)
            cnt++;
    }
    cout << cnt + 1 << endl;
    return 0;
}