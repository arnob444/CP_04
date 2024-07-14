#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    vector<bool> vis(n, false);

    int maxEle = 0, minEle = 0;
    int maxfreq = INT_MIN, minfreq = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == true)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                vis[j] = true;
            }
        }
        if (count > maxfreq)
        {
            maxfreq = count;
            maxEle = arr[i];
        }

        if (count < minfreq)
        {
            minfreq = count;
            minEle = arr[i];
        }
    }

    cout << "Hightest no :" << maxEle << endl;
    cout << "Lowest no :" << minEle << endl;
}
int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    solve(arr, n);
    return 0;
}