#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int solve(vector<int> a, int l, int r)
{
	int c = 0;
	for (int i = l; i <= r; ++i)
	{
		if (a[i] == 1)
			a[i] = 0;
		else
			a[i] = 1;
	}

	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] == 1)
			c++;
	}
	return c;
}

int main()
{
	int n,ma = 0;
	scanf("%d",&n);
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	//eto pizdec my friend

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			ma = max(ma, solve(a, i, j));
		}
	}

	printf("%d",ma);

}