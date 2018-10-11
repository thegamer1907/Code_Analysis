#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, t;
	cin >> n >> t;
	int r = 0;
	int l = 0;
	int sum = 0;
	int max = -1;
	vector<int> a;
	a.resize(n);
	while (r < n)
	{
		cin >> a[r];
		sum += a[r];
		if (sum > t)
		{
			if (r - l - 1 > max) max = r - l - 1;
			sum -= a[l];
			l++;
		}
		if (sum == t)
		{
			if (r - l > max) max = r - l;
			sum -= a[l];
			l++;
		}
		if (r == n - 1 && sum < t)
		{
			if (r - l > max) max = r - l;
		}
		r++;
	}
	cout << max+1;
	//system("pause");
	return 0;
}