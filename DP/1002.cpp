#include <iostream>
#include <bits/stdc++.h>
#define fr(i,x,n) 	for(int i=x;i<n;i++)
#define frr(i,x,n) 	for(int i=n;i>=x;i--)
#define ll long long
#define all(v) v.begin(),v.end()
using namespace std;

int main() {

	int n,mx=0,ans=0 ;
	cin>>n;
	vector<int>v(n);
	fr(i,0,n)
	{
		cin>>v[i];
		if(v[i])
			ans++;
	}
	int one=ans;
mx=max(mx,one);
fr(i,0,n)
{
	if(v[i])
		ans--;
	else
		ans++;
	mx=max(ans,mx);
	if(ans<one)
		ans=one;
}
//cout<<one<<" "<<mx<<endl;
if(mx==one)
	mx=mx-1;
cout<<mx<<endl;
	return 0;
}
