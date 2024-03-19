#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0, fsum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        fsum += i;
    }

    cout << fsum - sum << endl;
    return 0;
}