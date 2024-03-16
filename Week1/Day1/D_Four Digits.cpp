#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    stringstream ss;
    ss << n;

    string str = ss.str();
    while (str.length() < 4) {
        str = "0" + str;
    }
    cout << str << endl;
    return 0;
}
