#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> om(n), addy(n);
        for (int i = 0; i < n; i++)
            cin >> om[i];
        for (int i = 0; i < n; i++)
            cin >> addy[i];
        int om_max = 0, addy_max = 0, om_count = 0, addy_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (om[i] > 0)
                om_count++;
            else
                om_count = 0;
            if (addy[i] > 0)
                addy_count++;
            else
                addy_count = 0;
            om_max = max(om_max, om_count);
            addy_max = max(addy_max, addy_count);
        }
        if (om_max > addy_max)
            cout << "Om" << endl;
        else if (addy_max > om_max)
            cout <<"Addy\n";
        else
            cout << "Draw\n";
    }
    return 0;
}