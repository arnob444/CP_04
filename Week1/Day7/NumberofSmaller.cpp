#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    int j = 0;
    for (int i = 0; i < m; i++)
    {
        while (j < n and a[j] < b[i])
        {
            j++;
        }
        cout << j << " ";
    }
    return 0;
}
