#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<map>
#include<sstream>
#include<queue>
#include<stack>
#include<cstdlib>
#include<set>
#define LL long long
using namespace std;
int line[1000],bf[1000];
int main()
{
	
	int n,ans=0,now,sum;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) 
	{
	scanf("%d",&line[i]);
	bf[i]=bf[i-1]+line[i];
	}
	for(int i=1;i<=n;i++)
	  for(int j=i;j<=n;j++)
	    {
	    	sum=j-i+1;
	    	now=bf[i-1]+bf[n]-bf[j]+sum-(bf[j]-bf[i-1]);
	    	ans=max(ans,now);
	    	
		}
	printf("%d",ans);
	return 0;
}
