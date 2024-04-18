#include <bits/stdc++.h>
using namespace std;
#define endl            "\n"
#define ll              long long int
#define ON(n, k)        (n | (1 << k))
#define OFF(n, k)       (n & (~(1 << k)))
#define isON(n, k)      ((n >> k) & 1)
#define flip(n, k)      ((1 << k) ^ n)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != s[i + 1])
                flag = false;
        }
        if (flag)
        {
            cout << 0 << "\n";
            continue;
        }
        vector<int> arr;
        int c = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] == s[i + 1])
                continue;
            if ((s[i] - '0') == c)
            {
                arr.push_back(i);
                c = 1 - c;
            }
            else if ((s[i + 1] - '0') == c)
            {
                arr.push_back(i + 1);
                c = 1 - c;
            }
        }
        flag = true;
        int cnt = 0;
        for (int it : arr)
        {
            char ch = '0';
            if (cnt % 2 == 0)
                ch = '1';
            cnt++;
            s[it] = ch;
        }
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != s[i + 1])
                flag = false;
        }
        if (flag)
        {
            cout << arr.size() << "\n";
            for (int it : arr)
                cout << it + 1 << " ";
            cout << "\n";
            continue;
        }
        vector<int> brr;
        c = 1;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] == s[i + 1])
                continue;
            if ((s[i] - '0') == c)
            {
                brr.push_back(i);
                c = 1 - c;
            }
            else if ((s[i + 1] - '0') == c)
            {
                brr.push_back(i + 1);
                c = 1 - c;
            }
        }
        flag = true;
        cnt = 0;
        for (int it : arr)
        {
            char ch = '1';
            if (cnt % 2 == 0)
                ch = '0';
            cnt++;
            s[it] = ch;
        }
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != s[i + 1])
                flag = false;
        }
        if (flag)
        {
            cout << brr.size() << "\n";
            for (int it : brr)
                cout << it + 1 << " ";
            cout << "\n";
            continue;
        }
        cout << -1 << "\n";
    }
    return 0;
}
