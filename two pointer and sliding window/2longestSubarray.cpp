/*
    Sum of longest subarray with sum <= k
    Subarray means contiguous elements from the original array.
    Ex: for array [1,2,3,4] here [2,3] is a subarray, [1,2,4] not a subarray, it's a subsequence
*/
#include <bits/stdc++.h>
using namespace std;

int BruteForce(int a[], int n, int k) // O(n*n)
{
    int maxlen = 0, sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum <= k)
            {
                // maxlen = max(maxlen, j - i + 1);     // length of the longest subarray
                maxlen = max(maxlen, sum);              // sum of longest subarray
            }
            else if (sum > k)
                break;
        }
    }
    return maxlen;
}
int BetterApproach(int a[], int n, int k) // O(n + n) = O(2n) = O(n)
{
    int l = 0, r = 0, sum = 0, maxlen = 0;
    while (n > r)
    {
        sum += a[r];
        while (sum > k)
        {
            sum = sum - a[l];
            l++;
        }
        if (sum <= k)
        {
            //maxlen = max(maxlen, r - l + 1);     // length of the longest subarray
            maxlen = max(maxlen, sum);              // sum of longest subarray
        }
        r++;
    }
    return maxlen;
}
int OptimizeApproach(int a[], int n, int k)
{
    int l = 0, r = 0, sum = 0, maxlen = 0;
    while (n > r)
    {
        sum += a[r];
        if (sum > k)
        {
            sum = sum - a[l];
            l++;
        }
        if (sum <= k)
        {
            // maxlen = max(maxlen, r - l + 1);     // length of the longest subarray
            maxlen = max(maxlen, sum);              // sum of longest subarray
        }
        r++;
    }
    return maxlen;
}
int main()
{
    // int a[] = {2, 5, 1, 7, 10};
    int a[] = {2, 5, 10, 1, 10, 2, 7};

    int k = 14;
    int n = sizeof(a) / sizeof(a[0]);
    cout << BruteForce(a, n, k) << endl;
    cout << BetterApproach(a, n, k) << endl;
    cout << OptimizeApproach(a, n, k) << endl;
    return 0;
}