#include<bits/stdc++.h>
const int N=1e5+9;
using namespace std;
int a[N],n,k;
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i)
	{
		int now=0;
		for(int j=1;j<=k;++j)
		{
		   int x;scanf("%d",&x);
		   if(x) now=now+(1<<(j-1));
		}
		a[i]=now;
	}
	int flag=0;
	for(int i=0;i<(1<<k);++i)
	{
		int other=0;
		for(int j=0;j<k;++j)
		 if((i&(1<<j))==0)
		 	other=other+(1<<j);
		int hh1=0,hh2=0;
		
		for(int j=1;j<=n;++j)
		 if((a[j]&i)==a[j])
		  hh1=1;
		for(int j=1;j<=n;++j)
		 if((a[j]&other)==a[j])
		  hh2=1;
		
		if(hh1&&hh2) flag=1;
	}
	
	if(flag)  printf("YES\n");
	else printf("NO\n");
	return 0;
}
/*
5 3
1 0 1
1 1 0
1 0 0
1 0 0
1 0 0
*/



