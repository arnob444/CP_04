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
        map<string, int> mp;
        vector<string> v[3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string x;
                cin >> x;
                v[i].push_back(x);
                mp[x]++;
            }
        }
        vector<int> cnt(3);
        for (int i = 0; i < 3; i++)
        {
            for (string word : v[i])
            {
                if (mp[word] == 1)
                {
                    cnt[i] += 3;
                }
                else if (mp[word] == 2)
                {
                    cnt[i] += 1;
                }
            }
        }
        for (int i = 0; i < 3; i++)
            cout << cnt[i] << " ";
        cout << endl;
    }
}