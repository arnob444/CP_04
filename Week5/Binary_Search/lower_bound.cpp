#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 4, 4, 6, 9, 10};
    auto it = lower_bound(v.begin(), v.end(), 3);
    auto it2 = upper_bound(v.begin(), v.end(), 3);

    cout << "Lower Bound Index: " << it - v.begin() << endl;
    cout << "Lower Bound Value: " << *it << endl;
    cout << "Upper Bound Index: " << it2 - v.begin() << endl;
    cout << "Upper Bound Value: " << *it2 << endl;

    // if (it == v.end())
    //     cout << "not present" << endl;
    // else
    //     cout << "present" << endl;
    return 0;
}