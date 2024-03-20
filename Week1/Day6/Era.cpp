#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int mx = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			int x;
			cin >> x;  
			mx = max(mx, x - i);
		}
		cout << mx << endl;
	}
	return 0;
}