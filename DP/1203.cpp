#include <bits\stdc++.h>
#include <conio.h>
using namespace std;
int n;
int arr[110];
int main(void)
{
	int x,count=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x)
		{
			arr[i]=-1;
			count++;
		}
		else
			arr[i]=1;
	}
	int sum=0,ans=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		ans=max(ans,sum);
		if(sum<0)
		{
			sum=0;
		}
	}
	if(n==1&&arr[0]==-1)
		printf("0\n");
	else
		printf("%d\n",ans==0?-1+count:ans+count);
}