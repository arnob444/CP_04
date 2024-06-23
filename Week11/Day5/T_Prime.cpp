#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPrime(ll n)
{
    if (n == 1)
        return false;

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isPerfectPrime(ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (isPrime(sqrtl(a[i])) and isPerfectPrime(a[i]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}