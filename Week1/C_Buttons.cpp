#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    for (int i = 0; i < 2; i++)
    {
        if (a >= b)
        {
            c += a;
            a--;
        }
        else
        {
            c += b;
            b--;
        }
    }
    cout << c << endl;
    return 0;
}