#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, a = 0, b = 0;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if ((s1[i] == 'R' && s2[i] == 'S') || (s1[i] == 'S' && s2[i] == 'P') || (s1[i] == 'P' && s2[i] == 'R'))
                a++;
            else if (s1[i] == s2[i])
                continue;
            else
                b++;
        }
        if (a > b)
            cout << 0 << endl;
        else if (a == b)
            cout << 1 << endl;
        else
            cout << (b - a) / 2 + 1 << endl;
    }
    return 0;
}