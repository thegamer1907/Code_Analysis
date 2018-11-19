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

int main()
{

	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif
    int n;
    string s;
    cin>>s;
    cin>>n;
    string ans[n];
    for(int i=0;i<n;i++)
    	cin>>ans[i];
    int flag=0;
    for(int i=0;i<n;i++)
    {
    	if(ans[i]==s)
    	{
    		flag=1;
    		break;
    	}
    	swap(ans[i][0],ans[i][1]);
    	if(ans[i]==s)
    	{
    		flag=1;
    		break;
    	}
    	swap(ans[i][0],ans[i][1]);
    	for(int j=0;j<n;j++)
    	{
    		if(i==j)
    			continue;
    		if(ans[i][0]==s[1]&&ans[j][1]==s[0])
    		{
    			flag=1;
    			break;
    		}
    		if(ans[i][1]==s[0]&&ans[j][0]==s[1])
    		{
    			flag=1;
    			break;
    		}
    	}	
    	if(flag==1)
    	{
    		break;
    	}
    }
    if(flag==1)
    {
    	cout<<"YES\n";
    }
    else
    	cout<<"NO\n";
	return 0;
}