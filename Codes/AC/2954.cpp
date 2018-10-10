#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
const long long p=1000000000007LL;
char buf[1000010];
long long hsh[1000010],pw[1000010];
long long gthsh(int l,int r)
{
	return hsh[r]-hsh[l-1]*pw[r-l+1];
}
int main()
{
	scanf("%s",buf);
	int n=strlen(buf);
	pw[0]=1LL;
	for(int i=0;i<n;i++)
	{
		pw[i+1]=pw[i]*p;
		hsh[i+1]=hsh[i]*p+buf[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		if(gthsh(1,i+1)!=gthsh(n-i,n))continue;
		long long t=gthsh(1,i+1);
		for(int j=2;j+i<n;j++)
		{
			if(gthsh(j,j+i)==t)
			{
				for(int k=0;k<=i;k++)
				{
					printf("%c",buf[k]);
				}
				return 0;
			}
		}
	}
	printf("Just a legend");
	return 0;
}