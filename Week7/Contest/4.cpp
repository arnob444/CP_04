#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        int flag = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (flag == 0 and s[i] == '0' and s[i + 1] == '1')
            {
                flag = 1;
                continue;
            }
            if (s[i] != s[i + 1])
            {
                cnt++;
            }
        }
        cnt++;
        cout << cnt << endl;
    }
    return 0;
}
