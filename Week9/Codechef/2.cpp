#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int n = s.length();
        int ones = 0;
        int zeros = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                if (s[i] == '1')
                {
                    ones++;
                }
                else
                {
                    zeros++;
                }
            }
        }
        cout << min(ones, zeros) << endl;
    }
}