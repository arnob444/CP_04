#include <bits/stdc++.h>
using namespace std;
int maxSum(int a[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    int maxsum = sum;
    int l = 0, r = k - 1;

    while (r < n - 1)
    {
        sum = sum - a[l];
        l++;
        r++;
        sum = sum + a[r];
        maxsum = max(maxsum, sum);
    }
    return maxsum;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 1};
    int n = 7, k = 3;
    cout << maxSum(a, n, k) << endl;
    return 0;
}