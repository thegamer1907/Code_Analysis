#include <bits/stdc++.h>
using namespace std;

int n,k,cnt[16];

void work()
{
	scanf("%d %d",&n,&k);
	for (int i=1,s,x; i<=n; i++)
		{
			s=0;
			for (int j=1; j<=k; j++)
				scanf("%d",&x),s<<=1,s+=x;
			cnt[s]++;
		}
	for (int i=0; i<16; i++)
		for (int j=0; j<16; j++)
			if ((cnt[i])&&(cnt[j])&&((i&j)==0))
				puts("YES"),exit(0);
	puts("NO");
}

int main()
{
	work();
	return 0;
}
