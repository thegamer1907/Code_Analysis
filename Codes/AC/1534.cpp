 #include <cstdio>
#include <vector>
#include <tuple>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>

using namespace std;

typedef long long llint;

int n;
llint S;
llint a[100002];

int main()
{
	llint cost;

	scanf("%d %lld", &n, &S);

	for(int i=1;i<=n;i++)
		scanf("%lld", &a[i]);

	int l = 0, r = n;

	while(l<r)
	{
		int mid = (l+r+1)/2;

		priority_queue<llint> PQ;

		for(int i=1;i<=n;i++)
			PQ.push(-1*(a[i]+((llint)mid)*i));

		cost = 0;

		for(int i=1;i<=mid;i++)
		{
			cost += -1*PQ.top();
			PQ.pop();
		}

		if(cost<=S)
			l = mid;
		else
			r = mid-1;
	}

	priority_queue<llint> PQ;

	for(int i=1;i<=n;i++)
		PQ.push(-1*(a[i]+((llint)l)*i));

	cost = 0;

	for(int i=1;i<=l;i++)
	{
		cost += -1*PQ.top();
		PQ.pop();
	}

	printf("%d %lld\n", l, cost);


	return 0;
}