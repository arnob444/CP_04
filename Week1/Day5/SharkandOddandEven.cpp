#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n, i, x, sum = 0, mn = INT_MAX;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        sum = sum + x;
        if (x % 2 == 1 && x < mn)
            mn = x;
    }
    if (sum % 2 == 0)
        cout << sum;
    else
        cout << sum - mn;
}