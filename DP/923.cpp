#include <iostream>
using namespace std;
int huaji[100005];
int n;
int cnt;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> huaji[i];
		if (huaji[i])
			huaji[i] = -1, cnt++;
		else
			huaji[i] = 1;
	}
	if (cnt == n)
	{
		cout << n - 1;
		return 0;
	}
	int sum = 0;
	int minn = 0;
	int maxn = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += huaji[i];
		minn = min(minn, sum);
		maxn = max(maxn, sum - minn);
	}
	cout << cnt + maxn;
}