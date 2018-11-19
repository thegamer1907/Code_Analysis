#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
int p[100005];
using namespace std;
int main()
{
	memset(p,0,sizeof(p));
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		int a;
		if(k>=1) {
		scanf("%d",&a);
		p[i]+=a;
		}
		if(k>=2) {
		scanf("%d",&a);
		p[i]+=a*2;	
		}
		if(k>=3) {
		scanf("%d",&a);
		p[i]+=a*4;
		}
		if(k>=4) {
		scanf("%d",&a);
		p[i]+=a*8;	
		}
	}
	sort(p+1,p+1+n);
	n=unique(p+1,p+1+n)-p;
	n--;
	for(int i=1;i<=n;i++)
	for(int j=i;j<=n;j++)
	{
		int x=p[i]&p[j];
		if(!x)
		{
			printf("YES");
			return 0;
		}
	}
	
	
	printf("NO");
	return 0;
	
}
