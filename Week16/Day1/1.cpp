#include <bits/stdc++.h>
using namespace std;

int g(int i, int j)
{
    if (i == 0 || i == 9 || j == 0 || j == 9)
        return 1;
    if (i == 1 || i == 8 || j == 1 || j == 8)
        return 2;
    if (i == 2 || i == 7 || j == 2 || j == 7)
        return 3;
    if (i == 3 || i == 6 || j == 3 || j == 6)
        return 4;
    if (i == 4 || i == 5 || j == 4 || j == 5)
        return 5;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X')
                {
                    sum += g(i, j);
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}