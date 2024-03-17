#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    bool arr[26] = {false};

    for (int i = 0; i < a.size(); i++)
    {
        arr[a[i] - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if(arr[i] == false)
        {
            cout << char(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}