#include<stdio.h>
int main(void)
{
	int n,k;
	scanf("%d%d",&n,&k);
	int s=1,f=0,t,x;
	scanf("%d",&t);
	if (t>0) f=1;
	for (int i=2;i<=n;i++)
	{
		scanf("%d",&x);
		if (s<k && x>0) 
		{
			s++;
			if (x!=t) f=1;
			t=x;
		}else if(s>=k && x==t &&x>0)
		{
			s++;
		}	
	}
	if (f==1) printf("%d\n",s); else printf("0\n");
	return 0;
}