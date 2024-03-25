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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int cnt = 0, dup = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
                cnt++; // 1
            else
                dup++; // 1 2 3 4
        }

        if (dup % 2 == 0)
            cout << cnt + 1 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}