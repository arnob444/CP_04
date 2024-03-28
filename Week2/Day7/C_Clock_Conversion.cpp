#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        string s;
        cin >> s;

        int hr = (s[0] - '0') * 10 + (s[1] - '0');
        int min = (s[3] - '0') * 10 + (s[4] - '0');

        string period;
        if (hr >= 12)
        {
            period = "PM";
            if (hr > 12)
            {
                hr -= 12;
            }
        }
        else
        {
            period = "AM";
            if (hr == 0)
            {
                hr = 12;
            }
        }
        cout << hr / 10 << hr % 10 << ":" << s[3] << s[4] << " " << period << endl;
    }

    return 0;
}
