#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    if (n < k)
        return 0;

    int total = 0;
    for (int i = 0; i < k; ++i)
    {
        total += arr[i];
    }

    int maxtotal = total;
    for (int i = 0; i < n - k; ++i)
    {
        total -= arr[i];
        total += arr[i + k];
        maxtotal = max(maxtotal, total);
    }

    return maxtotal;
}
int main()
{
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSum(arr, n, k);

    return 0;
}

// int maxSum(int arr[], int n, int k)
// {
//     int maxtotal = 0;
//     for (int i = 0; i <= n - k; ++i)
//     {
//         int total = 0;
//         for (int j = i; j < i + k; ++j)
//         {
//             total += arr[j];
//         }
//         maxtotal = max(maxtotal, total);
//     }
//     return maxtotal;
// }