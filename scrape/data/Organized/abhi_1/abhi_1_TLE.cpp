#include<bits/stdc++.h>
using namespace std;
long long int findind(vector<long long int> &pos,long long int t,long long int lo,long long int hi)
{
	long long int mid,ans=-1;
	while(lo<=hi)
	{
		mid=lo+(hi-lo)/2;
		if(pos[mid]<=t)
		{
			ans=mid;
			lo=mid+1;
		}
		else
		{
			hi=mid-1;
		}
	}
	return ans;
}
int main()
{
	long long int n,m,k;
	cin>>n>>m>>k;
	vector<long long int> pos(m);
	long long int ans=0,t=k,count=0,prev=0;
	for(long long int i=0;i<m;i++)
	{
		cin>>pos[i];
	}
	sort(pos.begin(),pos.end());
	long long int i=m;
	while(i>0)
	{
		long long int j=findind(pos,t,prev,m-1);
		if(j==-1)
		{
			t=t+k;
		}
		else
		{
			i=i-(j-prev+1);
			ans++;
			t=t+(j-prev+1);
			prev=j+1;
		}
	}
	cout<<ans<<'\n';
}