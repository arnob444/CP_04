#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & (~(1 << k)))
#define isON(n, k) ((n >> k) & 1)
#define flip(n, k) ((1 << k) ^ n)
#define fr for (int i = 0; i < n; i++)

bool binarySearch(int arr[], int l, int r, int key)
{
    int mid = (l + r) / 2;
    if (l > r)
        return false;
    if (arr[mid] == key)
        return true;
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, r, key);
    else
        return binarySearch(arr, l, mid - 1, key);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int arr[n];
    fr
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        int key;
        cin >> key;
        if (binarySearch(arr, 0, n - 1, key))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}