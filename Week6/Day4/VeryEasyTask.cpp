# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    if (x > y)
        swap(x, y);

    int low = 0, high = n * y, mid;
    while (low < high)
    {
        mid = (low + high) / 2;             // 2
        if ((mid / x) + (mid / y) >= n - 1) // 2 + 2 >= 4 - 1
            high = mid;                     // 2
        else
            low = mid + 1;                  // 2 + 1
    }
    cout << low + min(x, y);
    return 0;
}