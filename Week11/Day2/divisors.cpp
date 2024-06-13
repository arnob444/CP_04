#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }

    sort(v.begin(), v.end());

    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}