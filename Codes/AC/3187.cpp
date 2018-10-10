#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int n,a[100005],ans,b[100005],sum=1100000001;
int main(void)
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
		b[i]=a[i]%n;
	for(int i=1;i<=n;i++)
	{
		int tmp=a[i];
		if(b[i]+1>i) tmp+=n-b[i]-1+i;
		else tmp+=i-b[i]-1;
		if(sum>tmp) ans=i,sum=tmp;
	}
	printf("%d\n",ans);
	return 0;
}