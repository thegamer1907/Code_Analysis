#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int n;
	int a[105];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int m;
	cin >> m;
	int b[105];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(b, b + m);
	int count = 0;
	if (n < m)
	{
		for (int i = 0; i < n; i++)
		{
			int j = 0;
			while (1&&j<m)
			{
				if (a[i] >= b[j] - 1 && a[i] <= b[j] + 1)
				{
					a[i] = -10;
					b[j] = -10;
					count++;
					break;
				}
				j++;
			}
		}
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			int j = 0;
			while (1&&j<n)
			{
				if (b[i] >= a[j] - 1 && b[i] <= a[j] + 1)
				{
					b[i] = -10;
					a[j] = -10;
					count++;
					break;
				}
				j++;
			}
		}
	}
	cout << count << endl;
}