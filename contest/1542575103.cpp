#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

const int MAXN=1<<4+5;
bool f[MAXN];
int a[MAXN];
int main()
{
	a[1]=1;
	a[2]=3;
	a[3]=7;
	a[4]=15;
	int n,k;
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++)
	{
		int tot=0;
		for (int j=0;j<k;j++)
		{
			int x;
			scanf("%d",&x);
			tot|=((x==1)?(1<<j):0);
		}
		f[tot]=1;
	}
	for (int i=0;i<=a[k];i++)
	{
		for (int j=0;j<=a[k];j++)
		{
			if (f[i] && f[j])
			{
				if ((i&j)==0)
				{
					cout<<"YES";
					return 0;
				}
			}	 
		}	
	} 
	cout<<"NO";
    return 0;
}
