#include<cstdio>
using namespace std;
int n,i,res,sum=0,k;
int main()
{
	scanf("%d%d",&n,&k);
	res=240-k;
	for(i=1;i<=n;i++)
	{
		sum+=5*i;
		if(sum>res)break;
	}	
	printf("%d\n",i-1);
	return 0;
}