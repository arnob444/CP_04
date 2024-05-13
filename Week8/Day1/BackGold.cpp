#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n / 2 << endl;
    while (n > 0)
    {
        if (n == 3)
        {
            cout << 3 << " ";
            n -= 3;
        }
        else
        {
            cout << 2 << " ";
            n -= 2;
        }
    }
}