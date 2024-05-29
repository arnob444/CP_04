#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define fr for (int i = 0; i < n; i++)
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main()
{
    int t;
    cin >> t;
    vector<string> v(t);

    for (int i = 0; i < t; ++i)
    {
        cin >> v[i];
    }

    for (int i = 0; i < t; ++i)
    {
        string s = v[i];
        set<pair<int, int>> visited;
        visited.insert({0, 0}); 

        vector<pair<int, int>> queue;
        queue.push_back({0, 0});

        for (size_t j = 0; j < queue.size(); ++j)
        {
            int x = queue[j].first;
            int y = queue[j].second;

    
            for (int k = 0; k < 4; ++k)
            {
                if (s[k] == '1')
                {
                    int nx = x + dx[k];
                    int ny = y + dy[k];

      
                    if (nx >= -10 && nx <= 10 && ny >= -10 && ny <= 10)
                    {
                        if (visited.find({nx, ny}) == visited.end())
                        {
                            visited.insert({nx, ny});
                            queue.push_back({nx, ny});
                        }
                    }
                }
            }
        }

        cout << visited.size() << endl;
    }
    return 0;
}
