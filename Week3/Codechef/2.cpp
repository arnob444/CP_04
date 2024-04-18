#include <bits/stdc++.h>
using namespace std;
string check_elements(vector<int> &arr)
{
    if (arr[0] != arr[arr.size() - 1])
        return "NO";
    else
    {
        int first_last = arr[0];
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (arr[i] < first_last)
                return "NO";
        }
        return "YES";
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        string result = check_elements(a);
        cout << result << endl;
    }

    return 0;
}
