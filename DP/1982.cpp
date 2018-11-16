#include <iostream>
using namespace std;
int n, m;
int arr[100005];
bool app[100005];
int ans[100005];
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (!app[arr[i]])
			ans[i] = ans[i + 1] + 1, app[arr[i]] = 1;
		else
			ans[i] = ans[i + 1];
	}
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		cout << ans[x - 1] << endl;
	}
}