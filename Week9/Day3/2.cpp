#include <bits/stdc++.h>
using namespace std;
const int MX = 100100;

int main()
{
    int t, n, arr[MX];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int cnt = 0, i = 1;
        for (; i < n; ++i)
        {
            if (arr[i] % arr[0])
            {
                if (cnt)
                {
                    if (arr[i] % arr[cnt])
                        break;
                }
                else
                {
                    cnt = i;
                }
            }
        }
        if (i >= n)
            cout << "Yes" << endl;
        else
            cout << "No\n";
    }
    return 0;
}
