#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define MAX 200005
#define MOD 1000000007
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define mp map<ll,ll>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll sum[1000006],a[1000006];
int main()
{ 
	fast 
	ll k,i,ans=0;
	string s;
	cin>>k;
	cin>>s;
	memset(sum,0,sizeof(sum));
	for(i=0;i<s.length();i++)
	{
		a[i]=s[i]-'0';
	}
	a[-1]=0;
	sum[-1]=0;
	if(k==0)
	{
		for(i=0;i<s.length();i++)
		{
			if(a[i]==1)
			{
				sum[i]=0;
			}
			if(a[i]==0)
			{
				sum[i]=sum[i-1]+1;
			}
			ans=ans+sum[i];
		}
		cout<<ans<<endl;
		return(0);
	}
	if(k!=0)
	{
		sum[0]=1;
		for(i=0;i<s.length();i++)
		{
		a[i]=a[i]+a[i-1];
		sum[a[i]]++;
		}
		for(i=0;i<s.length();i++)
		{
		ans=ans+sum[k+i]*(sum[i]);
		if(sum[k+i]==0)
		{
			cout<<ans<<endl;
			return(0);
		}
		}
		cout<<ans<<endl;
	}
}