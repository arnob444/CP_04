#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;1
        a[i].second = i + 1;
    }
 
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int v = x - a[i].first;
        int r = n - 1;
        for (int l = i + 1; l < r; l++)
        {
            while (l + 1 < r && a[l].first + a[r].first > v)
                r--;
            if (a[l].first + a[r].first == v)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
}
