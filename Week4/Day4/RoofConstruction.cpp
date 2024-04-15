#include <bits/stdc++.h>
using namespace std;
#define endl    "\n"
#define ll      long long int 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        --n;
        int x = log2(n);        // 0 1 2 3 
            x = pow(2, x);      // 1 2 4 8
        int ans = 0;
        for (int i = x; i <= n; i++)
        {
            cout << i << " ";
        }
        int y = n - x;
        cout << y << " ";
        for (int i = 0; i < x; i++)
        {
            if (i == y)
            {
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}