#include<stdio.h>

int main()
{
	int i,j,k,l,m,n,a[1101],pos1,pos2,count,max,one,zero;
	char c;
	scanf("%d\n", &n);
	for(i=0,count=0,pos1=-1,pos2=-1,max=-1,l=-1;i<n;i++)
	{
		scanf("%d", &k);
		a[i]=k;
		if(k==0)
		{
			if(count==0)
			{
				pos1 = i;
			}
			count++;
			if(count>=max)
			{
				max=count;
				pos2=i;
				l=pos1;
			}
		}
		else
		{
			count--;
			if(count<0)
			{
				count=0;
			}
		}
	}
	for(i=0,one=0,zero=0;i<n;i++)
	{
		if(i<l || i>pos2)
		{
			if(a[i]==1)
			{
				one++;
			}
		}
		else
		{
			if(a[i]==0)
			{
				one++;
			}
		}
	}
	if(l==-1 && pos2==-1)
	{
		printf("%d\n",one-1);
	}
	else
	{
		printf("%d\n", one);
	}
	return 0;
}