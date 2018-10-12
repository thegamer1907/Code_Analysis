#include <iostream>
#include <algorithm>

#define MAX 500000+1
using namespace std;

int a[MAX];
int mark[MAX];

int bs(int l, int r, int a[],int key)
{
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == key) return m;
		else if (a[m] > key) r = m - 1;
		else l = m + 1;
	}
	return l;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	int i = n, j = n / 2;
	int res = n;
	while (j < i && j > 0 && i > n / 2)
	{
		if (a[i] >= 2 * a[j])
		{
			res--;
			j--;
			i--;
		}
		else j--;
	}
	cout << res << endl;
}