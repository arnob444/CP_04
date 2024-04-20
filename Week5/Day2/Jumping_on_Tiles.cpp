#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define fr for (int i = 0; i < len; i++)

void solve()
{
    string s;
    cin >> s;
    int len = s.size();

    vector<pair<char, int>> order;
    char mn = min(s[0], s[len - 1]); // identify min char and max char
    char mx = max(s[0], s[len - 1]);

    fr
    {
        if (s[i] >= mn and s[i] <= mx)
        {
            order.push_back({s[i], i});
        }
    }

    sort(order.begin(), order.end(), [&](pair<char, int> a, pair<char, int> b)
         {
             return a.second < b.second; // index-wise sortuing
         });

    if (order.size() > 2)
    {
        sort(order.begin() + 1, order.begin() + order.size() - 1, [&](pair<char, int> a, pair<char, int> b)
             {
            if (s[0] > s[len - 1]) {
                return a.first > b.first;
            }
            return a.first < b.first; });
    }

    vector<int> v;
    v.push_back(1);
    ll moves = 0;
    for (int i = 1; i < order.size(); i++)
    {
        moves += abs(order[i - 1].first - order[i].first);
        v.push_back(order[i].second + 1);
    }

    cout << moves << " " << v.size() << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}