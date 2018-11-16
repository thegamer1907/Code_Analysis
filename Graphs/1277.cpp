#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>a;
	int n, t, inp;
	cin >> n >> t;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> inp;
		a.push_back(inp);
	}
	for (int i = 0; i <= t - 1; i+=a[i])
	{
		if (i == t - 1)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}