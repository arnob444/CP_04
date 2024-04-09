#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < (1 << n); i++)   // use (1 << n) instead of 2^n - 1
    {
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << endl;
            }
        }
        cout << endl;
    }
    return 0;
}