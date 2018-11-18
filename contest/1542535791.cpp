/*

Vijay Krishan Pandey
MNNIT Allahabad



*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[100];
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
	{
		int c=0;
		for(int j=0;j<k;j++)
		{
			int x;
			cin>>x;
			c|=(x<<j);
		}

		a[c]++;
	}

	for(int i=0;i<(1<<k);i++)
	{
		for(int j=0;j<(1<<k);j++)
		{
			if(a[i] && a[j] && (i&j)==0)
			{
				printf("YES\n");
				return 0;
			}
		}
	}

	printf("NO\n");

	return 0;
}