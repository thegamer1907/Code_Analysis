#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
#define For(i,m) for(int i=0;i<m;i++)
#define FOR(i,n,m,x) for(int i=n;i<m;i=i+x)
#define rFor(i,m) for(int i=m;i>=0;i--)
#define rFOR(i,n,m,x) for(int i=n;i>=m;i-=x)
#define mem(arr,x) memset(arr,x,sizeof(arr))
#define pb(y) push_back(y)
#define Sort(arr) sort(arr.begin(),arr.end())
#define rSort(arr) sort(arr)
#define swap(a,b) a=a+b;b=a-b;a=a-b; 
#define print(arr,x) For(i,arr.size()){cout<<arr[i]<<x;}

using namespace std;

int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll arr[m];
	For(i,m)
	{
		cin>>arr[i];
	}
	ll pa,e,s,j=0,ans=0;
	e=0;
	pa=k;
	s=0;
	while(e<=n)
	{
		//cout<<e<<"-"<<ans<<" ";
		if(j<m)
			e+=max(k,((arr[j]-e)/k)*k);
		else
			e+=k;
		while(e<=n)
		{
			s=0;
			while(arr[j]<=e && j<m)
			{
				s++;
				j++;
			}
			if(s!=0)
				ans++;
			else
				break;
			e+=s;
		//cout<<e<<" ";
		}
	}
	s=0;
			while(arr[j]<=n && j<m)
			{
				s++;
				j++;
			}
			if(s!=0)
				ans++;
	cout<<ans;
}