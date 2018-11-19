#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int n,k,XD;
bool bo[100000];

int main()
{
//	freopen("C.in","r",stdin);
//	freopen("C.out","w",stdout);
	
	scanf("%d%d",&n,&k);
	memset(bo,false,sizeof(bo));
	
	XD=(1<<k);
	for(int i=1;i<=n;++i)
	{
		int tot=0,x;
		for(int j=1;j<=k;++j)
		{
			scanf("%d",&x);
			tot<<=1;
			tot+=x;
		}
		bo[tot]++;
	}	
	for(int i=0;i<XD;++i)
		for(int j=0;j<XD;++j)
			if(bo[i] && bo[j] && (!(i&j)))
			{
				printf("YES\n");
				return 0;
			}
	printf("NO\n");
	return 0;
}