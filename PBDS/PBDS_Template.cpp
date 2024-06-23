#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int n;
    cin >> n;
    pbds<int> p;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        p.insert(x);
    }

    // p.erase(7);
    int x = p.order_of_key(7); // 7 er caite strictly less 3 ta
    cout << "Strictly Less: " << x << endl << endl;

    auto it = p.find_by_order(3);
    cout << *it << endl;


    for (auto val : p)
    {
        cout << val << " ";
    }
    return 0;
}