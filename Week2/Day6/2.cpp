#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int diff = a - b;
        if (diff >= 10)
        {
            cout << "0\n";
        }
        else
        {
            int rem = 10 - diff;
            int cnt = 0;
            while (rem > 0)
            {
                a += 3;
                cnt++;
                rem = 10 - (a - b);
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
