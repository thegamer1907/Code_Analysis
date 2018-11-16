#include<bits/stdc++.h>
using namespace std;

#define ll long long
//for(i=0;i<n;i++)
ll m,n,ans;
vector<ll> v[200002];
int a[200002];

void path(ll vr,ll c,ll prev)
{//cout<<vr<<" "<<c<<"\n";
	if(c>m)return;

	if(v[vr].size()==1&&vr!=0)
		ans++;
	else {
		for(ll i=0;i<v[vr].size();i++)
		{
			if(v[vr][i]!=prev)
			path(v[vr][i],(c+1)*a[v[vr][i]],vr);
		}
	}
}


int main()
{
	ll i,j,x,y;
	cin>>n>>m;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n-1;i++)
	{
		cin>>x>>y;
		v[x-1].push_back(y-1);
		v[y-1].push_back(x-1);
	}
	cout<<"\n";
	if(n==1)
		cout<<1;
	else{
path(0,a[0],-1);
	
cout<<ans;
}
	return 0;
}