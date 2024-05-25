#include <bits/stdc++.h>
using namespace std;
const int MAX = 111;

int main()
{
    int t, n, a[MAX];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            a[n + i] = a[i];
        }
        bool sorted = false;
        for (int i = 0; i < n; ++i)
        {
            int j = 1;
            for (; j < n; ++j)
            {
                if (a[i + j] < a[i + j - 1])
                {
                    break;
                }
            }
            if (j >= n)
            {
                sorted = true;
                break;
            }
        }

        if (sorted)
            cout << "Yes" << endl;
        else
            cout << "No\n";
    }
    return 0;
}
