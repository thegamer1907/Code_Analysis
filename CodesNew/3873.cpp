#include<bits/stdc++.h>
#define LLI long long int
#define heap priority_queue
#define MAXN 2000000+5
#define INF (LLI)(9e12)
using namespace std; 
LLI l=-INF,r=INF,mid,sum;
LLI N,x;
int main()
{
	cin>>N;
	for(int i=1;i<=N;i++)
		cin>>x,l=max(l,x),sum+=x;
	while(r-l>100)
	{
		mid=(l+r)>>1;
		if(N*mid-sum>=mid)
			r=mid-1;
		else
			l=mid+1;
	}
	for(mid=l;mid<=r;mid++)
		if(N*mid-sum>=mid)
		{
			cout<<mid<<"\n";
			return 0;
		}
	return 0;
}