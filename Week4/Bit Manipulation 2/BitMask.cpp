#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < (1 << n); i++)  // use (1 << n) instead of 2^n
    {
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)           // Bit is on or off
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cnt++;
        cout << endl;
    }
    cout << "Total count : " << cnt << endl;
    return 0;
}