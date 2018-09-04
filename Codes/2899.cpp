#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int z[1000010],n,m,r,l;
char b[1000010];
int maxn=0;
int main()
{
	scanf("%s",b);
	m=strlen(b);
	for (int i=1;i<=m;i++)
	{
		if (i>r)
		{
			int t=i,bg=0;
			while (b[t]==b[bg])
				t++,bg++;
			z[i]=bg;
			r=t-1;
			l=i;
		}
		else
		{
		//	cout<<i<<" "<<i-l<<" "<<l<<" "<<r<<endl;
			if (z[i-l]<r-i+1) z[i]=z[i-l];
			else
			{
				int t=r+1,bg=r-i+1;
			//	cout<<t<<" "<<bg<<endl;
				while (b[t]==b[bg])
					t++,bg++;
				z[i]=bg;
				r=t-1;
				l=i;
			}
		}
	}
	int nw=0;
	for (int i=1;i<m;i++)
	{
		if (i+z[i]==m&&nw>=z[i])
			maxn=max(maxn,z[i]);
		nw=max(nw,z[i]);
	}
	if (maxn==0) printf("Just a legend");
	for (int i=0;i<maxn;i++)
		printf("%c",b[i]);
}
