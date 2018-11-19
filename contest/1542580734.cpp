#include<bits/stdc++.h>
using namespace std;

const int max_n = 1e5+7;
const int inf   = 1e9+7;

int a[max_n];
int n,k,c;

inline int pow(int a,int b)
{
	int ans=1;
	for(int i=1; i<=b; ++i)
	  ans*=a;
	return ans;
}

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1; i<=n; ++i)
	{
		int ans=0;
		for(int j=k; j>=1; --j)
		{
			scanf("%d",&c);
			if(c==1) ans+=pow(2,j-1);
		}
		a[ans]+=1;
	}
	for(int i=0; i<=15; ++i)
	  for(int j=0; j<=15; ++j)
	    if((i&j)==0 && a[i] && a[j]) 
	    {
	    	printf("YES\n");
	    	return 0;
		}
	printf("NO\n");
	return 0;
}
