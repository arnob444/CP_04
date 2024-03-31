#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n + 5], pre[n + 5], suf[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        pre[0] = 0;
        pre[n + 1] = 0;
        suf[0] = 0;
        suf[n + 1] = 0;
        pre[1] = arr[1];

        for (int i = 2; i <= n; i++)
        {
            pre[i] = arr[i] + pre[i - 1];
        }
        suf[n] = arr[n];
        for (int i = n - 1; i >= 1; i--)
        {
            suf[i] = arr[i] + suf[i + 1];
        }

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int sum = pre[l - 1] + suf[r + 1];
            int val = r - l + 1;
            sum += (val * k);
            if (sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}