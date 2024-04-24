#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    if (n <= (x + m))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}