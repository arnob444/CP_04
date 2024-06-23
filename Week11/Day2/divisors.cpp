#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);   
            if (n / i != i)
            {
                v.push_back(n / i);
            }
        }
    }

    // sort(v.begin(), v.end());

    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "Total count: " << v.size();

    return 0;
}