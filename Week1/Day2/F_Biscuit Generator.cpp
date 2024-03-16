#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    float t = c + 0.5;
    int ans = t / a;

    cout << ans * b << endl;
    return 0;
}
