#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[110][110];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int s = a[1][1];  
    if (s != a[2][1]) 
    {
        s = a[3][1];  
    }
    cout << s << " "; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[i][1] != s) 
            {
                cout << a[i][j] << " "; 
            }
        }
    }
    cout << endl;
}