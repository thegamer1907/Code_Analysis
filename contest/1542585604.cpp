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
    int f[60];
int main()
{

	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif
    int h,m,s,t1,t2;

    cin>>h>>m>>s>>t1>>t2;
    t1=(t1*5)%60;
    t2=(t2*5)%60;
    f[(h*5)%60]=1;
    f[m]=1;
    f[s]=1;
   /* for(int i=0;i<60;i++)
    {
    	cout<<i<<" "<<f[i]<<endl;
    }*/
   // cout<<f[0]<<endl;
    int flag=0;
    if(t1>t2)
    	swap(t1,t2);
    for(int i=t1;i<t2;i++)
    {
    	if(f[i]==1)
    	{
    		flag=1;
    		break;
    	}
    }
    //cout<<flag<<endl;
    if(flag==0)
    	cout<<"YES"<<endl;
    else
    {
    	flag=0;
    	for(int i=0;i<t1;i++)
    	{
    		//cout<<"ha";
    		if(f[i]==1)
    		{
    			flag=1;
    			break;
    		}
    	}
    	//cout<<flag;
    	if(flag==1)
    		cout<<"NO";
    	else
    	{
    		for(int i=t2;i<60;i++)
    		{
    			//cout<<i<<endl;
    			if(f[i]==1)
    			{
    				flag=1;
    				break;
    			}
    		}
    		if(flag==1)
    			cout<<"NO";
    		else
    			cout<<"YES";
    	}
    }
	return 0;
}