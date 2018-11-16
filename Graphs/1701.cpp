#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int t;
	cin >> t;
	vector<int> a(n);
	for (int i = 0;i < n;++i)
	cin >> a[i];
	for (int i = 0;i < n-1;)
	{
		if (i+1 == t)
		{
			cout << "YES" << endl;
			return 0;
		}
		i+=a[i];
		if (i+1 == t)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}