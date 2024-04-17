#include <bits/stdc++.h>
using namespace std;
#define endl        "\n"
#define ll          long long int
#define ON(n,k)     (n | (1 << k))
#define OFF(n,k)    (n & (~(1 << k)))
#define isON(n,k)   ((n >> k) & 1)
#define flip(n,k)   ((1 << k) ^ n)

int main()
{
    cout << isON(20, 2);
    cout << endl;
    cout << ON(44, 4);
    cout << endl;
    cout << OFF(44, 3);
    cout << endl;
    cout << flip(44, 3);
    return 0;
}