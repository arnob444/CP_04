#include <bits/stdc++.h>
using namespace std;
#define const N = 1e7;
int hashing[10000000];

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // map<int, int> hashing;
    // Pre-compute
    // int hashing[10000000] = {0};

    for (int i = 0; i < n; i++)
    {
        hashing[a[i]]++;
    }

    int q;
    cin >> q;

    // for (auto it : hashing)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    
    while (q--)
    {
        int x;
        cin >> x;
        // Fetch
        cout << hashing[a[x]] << endl;
    }
    return 0;
}