#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
	int n,m,c=0;
	scanf("%d",&n);
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	scanf("%d",&m);
	vector<int>b(m);
	for (int i = 0; i < m; ++i)
	{
		scanf("%d",&b[i]);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0, j = 0; i < n && j < m;)
	{
		if (abs(a[i] - b[j]) <= 1)
		{
			++i; ++j; ++c;
		}
		else if (a[i] <= b[j])
			++i;
		else
			++j;
	}
	printf("%d",c);
}