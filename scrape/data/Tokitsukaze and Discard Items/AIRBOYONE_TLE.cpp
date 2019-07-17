#include <iostream>
using namespace std;
long long a[100007];
long long read()
{
    char ch=getchar();
	long long x=0,f=0;
    while(ch<'0' || ch>'9') f|=ch=='-',ch=getchar();
    while(ch>='0' && ch<='9') x=x*10+ch-'0',ch=getchar();
    return f?-x:x;
}
int main()
{
	long long n,m,k;
	n=read();m=read();k=read();
	for(int i=1;i<=m;i++)
	{
		a[i]=read();
	}
	long long topk=k;
	int count=0,num;
	int i=1;
	while(i<=m)
	{
		num=0;
		while(i<=m)
		{
			if(a[i]<=topk)
			{
				num++;
				i++;
			}
			else
			break;
		}
		if(num>0)
		{
			topk+=num;
			count++;
		}
		else
		{
			int chu=(a[i]-topk)/k;
			int mod=(a[i]-topk)%k;
			if(mod>0)
			chu++; 
			topk+=k*chu;
		}
	}
	printf("%d",count);
	return 0;
}