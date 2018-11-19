#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
#define pp pop_back
#define MAXN   100001
#define mp make_pair
#define endl '\n'
#define ff first
#define ss second
ll min(ll x,ll y)
{
	if(x<y)
	return x;
	return y;
}
ll max(ll x,ll y)
{
	if(x>y)
	return x;
	return y;
}
vector <ll> check(ll x)
{
	vector <ll> ans;
	ll p,q,r,s;
	ll i,j,k,l;
	ll temp=0;
	if(x<4)
	{
		q=x%2;
		p=(x/2)%2;
		for(i=0;i<2;i++)
		{
			if(i==1 && p==1)
			continue;
			for(j=0;j<2;j++)
			{
				if(j==1 && q==1)
				continue;
				temp=0;
				temp+=j*1;
				temp+=i*2;
				ans.pb(temp);
			}
		}
	}
	else if(x<8)
	{
		r=x%2;
		q=(x/2)%2;
		p=((x/2)/2)%2;;
		ll temp=0;
		for(i=0;i<2;i++)
		{
			if(i==1 && p==1)
			continue;
			for(j=0;j<2;j++)
			{
				if(j==1 && q==1)
				continue;
				for(k=0;k<2;k++)
				{
					if(k==1 && r==1)
					continue;
					temp=0;
					temp+=k*1;
					temp+=j*2;
					temp+=i*4;
					ans.pb(temp);
				}
			}
		}
	}
	else
	{
		s=x%2;
		r=(x/2)%2;
		q=((x/2)/2)%2;
		p=(((x/2)/2)/2)%2;
		ll temp=0;
		for(i=0;i<2;i++)
		{
			if(i==1 && p==1)
			continue;
			for(j=0;j<2;j++)
			{
				if(j==1 && q==1)
				continue;
				for(k=0;k<2;k++)
				{
					if(k==1 && r==1)
					continue;
					for(l=0;l<2;l++)
					{
						if(l==1 && s==1)
						continue;
						temp=0;
						temp+=l*1;
						temp+=k*2;
						temp+=j*4;
						temp+=i*8;
						ans.pb(temp);
					}
				}
			}
		}
	}
	return ans;
}
int main()
{ 
	ll n,k,i,j;
	cin>>n>>k;
	ll p,q,r,s;
	if(k==1)
	{
		for(i=0;i<n;i++)
		{
			cin>>p;
			if(p==0)
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
		cout<<"NO"<<endl;
		return 0;
	}
	map<ll,ll> m;
	vector <ll> v;
	vector <ll> ans[n+1];
	if(k==2)
	{
		for(i=0;i<n;i++)
		{
			ll x=0;
			cin>>p>>q;
			x+=q*1;
			x+=p*2;
			m[x]=1;
			v.pb(x);
			if(x==0)
			{
				cout<<"YES"<<endl;
				return 0;
			}
			ans[i]=check(x);
		}
	}
	else if(k==3)
	{
		for(i=0;i<n;i++)
		{
			ll x=0;
			cin>>p>>q>>r;
			x+=r*1;
			x+=q*2;
			x+=p*4;
			m[x]=1;
			v.pb(x);
			if(x==0)
			{
				cout<<"YES"<<endl;
				return 0;
			}
			ans[i]=check(x);
		}
	}
	else if(k==4)
	{
		for(i=0;i<n;i++)
		{
			ll x=0;
			cin>>p>>q>>r>>s;
			x+=s*1;
			x+=r*2;
			x+=q*4;
			x+=p*8;
			m[x]=1;
			v.pb(x);
			if(x==0)
			{
				cout<<"YES"<<endl;
				return 0;
			}
			ans[i]=check(x);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<ans[i].size();j++)
		{
			if(m[ans[i][j]]==1)
			{
				//cout<<i<<" "<<ans[i][j]<<endl;
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
