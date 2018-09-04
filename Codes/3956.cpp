#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define NINF -0x3f3f3f3f

using namespace std;

typedef pair<int,int> pii;

char recipe[105];
long long c[3];
long long n[3];
long long p[3];

bool solve (long long v, long long r)
{
	for (int i = 0; i < 3; i += 1)
	{
		long long req = max(0LL,v*c[i]-n[i]);
		long long price = req*p[i];
		
		r -= price;
	}
	
	return r >= 0LL;
}

int main ()
{
	scanf("%s",recipe);
	
	for (int i = 0; recipe[i]; i += 1)
	{
		if (recipe[i] == 'B')
		{
			c[0]++;
		}
		else if (recipe[i] == 'S')
		{
			c[1]++;
		}
		else
		{
			c[2]++;
		}
	}
	
	for (int i = 0; i < 3; i += 1)
	{
		scanf("%lld",&n[i]);
	}
	
	for (int i = 0; i < 3; i += 1)
	{
		scanf("%lld",&p[i]);
	}
	
	long long r;
	scanf("%lld",&r);
	
	long long lo = 0;
	long long hi = 1000002000000LL;
	
	for (int i = 0; i < 64; i += 1)
	{
		long long mid = (lo+hi)/2LL;
		
		if (solve(mid,r))
			lo = mid;
		else
			hi = mid-1;
	}
	
	if (solve(hi,r))
		printf("%lld\n",hi);
	else
		printf("%lld\n",lo);
		
	return 0;
}
