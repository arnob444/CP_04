#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            for (int k = 0; k <= 100; k++)
            {
                if ((i + j + k) <= n and (i * j * k) <= m)
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}