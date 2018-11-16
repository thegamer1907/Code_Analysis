#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll sum=k;
	//cout<<sum;
	k-=1;
	ll arr[n];
	map <ll,ll>kt;
	ll minus=0;
	
	for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==0 && i<=k)
			{
				//cout<<i;
				minus+=1;	
			}
		}
		//cout<<minus;
	 sum=sum-minus;
	k++;
	//cout<<sum;


	while(arr[k-1]==arr[k] && k<n)
	{
		if(arr[k]!=0)
		++sum;
	++k;
	}
	if(sum<0)
		cout<<0;
	else
	cout<<sum;



}