#include <iostream>
using namespace std;
int n, m;
bool seen[40000];
int arr[40000];
bool ch(int i) { return i >= 0 && i < n; }

void dfs(int i)
{
	if (i > n) return;
	if (ch(i))
	{
		seen[i] = 1;
		i = i + arr[i];
		dfs(i);
	}
	else
		seen[i] = 1;
}
int main()
{
	cin >> n >> m;
	for (int i = 1; i < n; i++)
		cin >> arr[i];
	dfs(1);

	if (seen[m])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
