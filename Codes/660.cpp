#include<cstdio>
int a[10001],t;
int main()
{
	int k;
	scanf("%d",&k);
	for (int i=1;;i++)
	{
		int sum=0,x=i;
		while (x) sum+=x%10,x/=10;
		if (sum==10) k--;
		if (k==0) {printf("%d",i); return 0;}
	}
	return 0;
}
