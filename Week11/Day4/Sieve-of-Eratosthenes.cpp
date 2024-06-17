// Time complexity : O(n * log * log(n))
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> prime(n + 1, true);
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cnt++;
            cout << i << " ";
        }
    }

    cout << "\nTotal prime: " << cnt << endl;
    return 0;
}