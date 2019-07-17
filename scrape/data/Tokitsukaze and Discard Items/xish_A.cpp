#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <iterator>
#include <cmath>
#include <set>
#include <deque> 
#include <string>


using namespace std;

long long n, m, k;
long long curPage;
long long l, r;

long long p[100010];
int pP;

int main()
{
	scanf("%I64d%I64d%I64d", &n, &m, &k);
	for (int i = 0 ; i < m ; i++)
		scanf("%I64d", &(p[i]));
	pP = 0;
	
	curPage = 1;
	l = 1;
	r = k;
	long long totalCount;
	long long count;
	
	totalCount = 0;
	
	while (pP < m)
	{
		if (p[pP] > r)
		{
			long long dist = p[pP] - r;
			long long step = (dist - 1) / k + 1;
			
			l = l + k * step;
			r = r + k * step;
		}
		
		count = 0;
		while ((l <= p[pP]) && (p[pP] <= r))
		{
			count++;
			pP++;
		}
		
		if (count > 0)
			totalCount++;
		
		l = l + count;
		r = r + count;
	}
	
	printf("%I64d\n", totalCount);
	
	return 0;
}