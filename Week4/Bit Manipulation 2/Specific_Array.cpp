#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 0;
    for (int i = 0; i < (1 << n); i++) // 2^n
    {
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
            {
                cout << arr[k] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}