#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {

        int n;
        cin >> n;
        int arr[2 * n][2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if ((i / 2) % 2 == 0 && (j / 2) % 2 == 0)
                {
                    cout << "#";
                }
                else if ((i / 2) % 2 == 1 && (j / 2) % 2 == 1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
}