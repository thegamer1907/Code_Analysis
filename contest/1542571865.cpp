#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;

ll mod=1e9+7;

ll modexp(ll x,ll n)
{
	if(n==0)
		return 1;
	if(n%2==0)
	{
		ll y=modexp(x,n/2)%mod;
		return (y*y)%mod;
	}
	return (x*modexp(x,n-1)%mod)%mod;
}

set<int> s[5];

int main()
{

	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif
    int n,k,x;
    for(int i=1;i<=4;i++)
    {
    	for(int j=0;j<pow(2,i);j++)
    	{
    		if(j==0)
    			s[i].insert(j);
    		if(j==1||j==2||j==4||j==8)
    			continue;
    		s[i].insert(j);
    	}
    }
    scanf("%d%d",&n,&k);
    set<int> num;
    int flag=0;
    for(int i=0;i<n;i++)
    {
    	int ans=0;
    	for(int j=0;j<k;j++)
    	{
    		scanf("%d",&x);
    		ans+=x*pow(2,k-j-1);
    	}
    	if(ans==0)
    	{
    		flag=1;
    	}
    	num.insert(ans);
    }
    if(flag==1)
    {
    	cout<<"YES"<<endl;
    	return 0;
    }
    vector<int> v;
    for(set<int>::iterator it=num.begin();it!=num.end();it++)
    {
    	//cout<<(*it)<<endl;
    	v.pb(*it);
    }
    num.clear();
    for(int i=0;i<v.size();i++)
    {
    	for(int j=i+1;j<v.size();j++)
    	{
    		//cout<<v[i]<<v[j]<<v[i]&v[j]<<endl;
    		//cout<<v[i]+v[j]<<endl;
    		if((v[i]&v[j])==0)
    		{
    			//cout<<"ha";
    			num.insert(v[i]+v[j]);
    		}
    	}
    }
    for(set<int>::iterator it=num.begin();it!=num.end();it++)
    {
    	x=*it;
    	//cout<<x<<endl;
    	if(s[k].count(x))
    	{
    		//cout<<x<<endl;
    		cout<<"YES";
    		return 0;
    	}
    }
    cout<<"NO";
	return 0;
}