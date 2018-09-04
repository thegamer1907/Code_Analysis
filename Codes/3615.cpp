#include<bits/stdc++.h>
#define f first
#define s second

using namespace std;
long long n,m,i,j,sum,k,a[2000009],b[2000009],c[2000009],d[2000009],x,s;
set <pair<long long,long long> > se;
set <pair<long long,long long> >:: iterator it;
pair<long long,long long> p;
unsigned long long ans;
int main()
{
	
	
	cin>>n>>m>>k;
	
	cin>>x>>s;
	
	for(i=1;i<=m;i++)
	{
		cin>>a[i];
	} 
	
	
	
	for(i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	
	for(i=1;i<=k;i++)
	{
		cin>>c[i];
	}
	
	for(i=1;i<=k;i++)
	{
		cin>>d[i];
		se.insert({-d[i],-i});
	}
	
	ans=x*n;
	
		for(i=1;i<=m;i++)
	{
	if(s>=b[i] && a[i]*n<ans)ans=a[i]*n;	
		
	}
	
		for(i=1;i<=k;i++)
	{
	if(s>=d[i] && ((n-c[i])*x)<ans)ans=(n-c[i])*x;	
		
	}
	
	
	
	for(i=1;i<=m;i++)
	{
		
		long long y=s-b[i],v,w;
	
		if(y<0)continue;
		
		p.f=-y;
		p.s=-999999999999999999;
		
		it=se.lower_bound(p);
		
		if(it==se.end())continue;
		
		p=*it;
		v=-p.s;
	//	cout<<v<<endl;
		if(ans>((n-c[v])*a[i]))ans=((n-c[v])*a[i]);
		
		
	}
	
	
	cout<<ans<<endl;
	
	return 0;
}