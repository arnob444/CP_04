#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Pre-compute
    int hashing[100000000] = {0};
    for (int i = 0; i < n; i++)
    {
        hashing[a[i]]++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        // Fetch

        cout << hashing[a[x]] << endl;
    }

    return 0;
}