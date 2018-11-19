#include <cstdio>
#include <iostream>
using namespace std;
#define ref(i,x,y)for(int i=x;i<=y;++i)
int n,k,a[17],t[4];
int main()
{
	scanf("%d%d",&n,&k);
	ref(i,1,n)
	{
		int r=0;
		ref(j,1,k)
		{
			int s;
			scanf("%d",&s);
			r=r*2+s;
		}
		a[r]=1;
	}
	bool flag=0;
	ref(i,1,(1<<16)-1)
	{
		ref(k,0,3)t[k]=0;
		int tot=0;
		ref(j,0,15)if(i>>j&1)if(a[j])
		{
			ref(k,0,3)t[k]+=(j>>k&1);
			tot++;
		}
		if(!tot)continue;
		bool ok=1;
		ref(k,0,3)if(t[k]>tot/2)ok=0;
		if(ok)flag=1;
	}
	if(flag)printf("YES\n");
	else printf("NO\n");
}