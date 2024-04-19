#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int
#define ON(n,k)     (n | (1 << k))
#define OFF(n,k)    (n & (~(1 << k)))
#define isON(n,k)   ((n >> k) & 1)
#define flip(n,k)   ((1 << k) ^ n)
#define fr          for (int i = 0; i < n; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1, mid, ans = n;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key <= a[mid])
            {
                ans = mid;
                r = mid - 1;
            
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}