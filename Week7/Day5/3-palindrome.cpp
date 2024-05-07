#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    if (n == 1)
    {
        cout << 'a' << endl;
        return 0;
    }
    s.push_back('a');
    s.push_back('a');
    for (int i = 2; i < n; i++)
    {
        if ((s[i - 2]) == 'a')
        {
            s.push_back('b');
        }
        else
        {
            s.push_back('a');
        }
    }
    cout << s << endl;
    return 0;
}