#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int n, t,cur = 0;
	scanf("%d %d",&n,&t);
	
	if (n == t)
	{
		printf("YES");
		return 0;
	}

	--t;
	vector<int> a(n + 1);

	for (int i = 0; i < n-1; ++i)
	{
		scanf("%d",&a[i]);
	}

	while (cur!=n-1)
	{
		cur += a[cur];
		if (cur == t)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");



}