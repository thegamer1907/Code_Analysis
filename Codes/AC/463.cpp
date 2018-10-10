#include <cstdio>
using namespace std;

bool sahi(long long int n)
{
	int ans = 0;
	while(n)
	{
		ans+=n%10;
		n/=10;
	}
	return ans==10;
}

int main()
{
	int k;
	scanf("%d", &k);
	long long int prev, cur;
	prev = cur = 19;
	int count = 1;
	while(count < k)
	{
		cur = prev+9;
		prev = cur;
		if(sahi(cur))
			count++;
	}
	printf("%d", cur);
}