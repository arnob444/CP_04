#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 2;
    if (a < b)
    {
        for (int i = a + 1; i < b; i++)
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    else
        cout << "0" << endl;
    return 0;
}