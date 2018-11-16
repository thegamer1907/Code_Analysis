#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include <vector>
#include <stack>
#define ll long long int 
using namespace std;
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n];
	ll freq[100000]={0};
	ll dis=0;
	for(ll p=0;p<n;p++)
	{
		cin>>a[p];
		freq[a[p]-1]+=1;
		if(freq[a[p]-1]==1)
		{
			dis+=1;
		}
	}
	ll l[m];
	for(ll p=0;p<m;p++)
	{
		cin>>l[p];
	}
	ll dp[n];
	dp[0]=dis;
	freq[a[0]-1]-=1;
	if(freq[a[0]-1]==0)
	dis-=1;
	//cout<<dp[0];
	for(ll q=1;q<n;q++)
	{
		if(freq[a[q]-1]>0)
		{
			dp[q]=dis;
			freq[a[q]-1]-=1;
		}
		if(freq[a[q]-1]==0)
		{
			dis-=1;
		}
		//cout<<dp[q];
	}
	for(ll r=0;r<m;r++)
	{
		cout<<dp[l[r]-1]<<"\n";
	}
	
	
}