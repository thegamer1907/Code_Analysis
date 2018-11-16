#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main() {
	ll n,m,k,i,j,x,y,z,c,f,t;
	map<ll,ll> mymap;
	cin>>n>>m;
	vector<ll> v,vv(n);
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.pb(x);
	}
	vv[n-1]=1;
	mymap[v[n-1]]=1;
	for(i=n-2;i>=0;i--)
	{
		if(mymap[v[i]]!=0)
		{
			vv[i]=vv[i+1];
			mymap[v[i]]++;
		}else
		{
			vv[i]=1+vv[i+1];
			mymap[v[i]]++;
		}
	}
	for(i=0;i<m;i++)
	{	
		cin>>x;
		cout<<vv[x-1]<<endl;
	}
	return 0;
}