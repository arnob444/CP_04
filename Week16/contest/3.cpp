#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define fr for (int i = 0; i < n; i++)

// void solve()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n / 2; i++)
//     {
//         cout << (n - i + 1) << " ";
//         cout << i << " ";
//     }
//     if (n % 2 != 0)
//     {
//         cout << (n / 2 + 1) << " ";
//     }
//     cout << endl;
// }
void solve() {
    int n;
    cin >> n;

    vector<int> result(n);
    int left = 0, right = n - 1;

    for (int i = 1; i <= n / 2; i++) {
        result[left++] = n - i + 1;
        result[left++] = i;
    }

    if (n % 2 != 0) {
        result[left] = n / 2 + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
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