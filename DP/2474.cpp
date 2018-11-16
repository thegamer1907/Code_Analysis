#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long int
#define v vector<ll> 
#define vv vector<v>
#define arrayinput {int n; cin>>n; v(n+1,-1); for (int i=1; i<=n; i++){int temp; cin>>temp;arr[i]=temp;}}
vv dp(1001,v(1001,-1));

v w(100001,0);
v red(100001,-1);
v arr(100001,0);
v BIT(100001,0);
v accumulat(100001,0);
ll z=1000000007;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,k;
	cin>>t>>k;
	ll n=100001;
	red[1]=1;
	if (k==1)
		w[1]=1;
	arr[1]=red[1]+w[1];
	for (int i=2; i<=100000; i++)
	{
		red[i]=(red[i-1]+w[i-1])%z;
		if (i>k)
			w[i]=(red[i-k]+w[i-k])%z;
		else if (i==k)
			w[i]=1;
		else
			w[i]=0;
		arr[i]=(red[i]+w[i])%z;
	}
	for (int i=1; i<=n; i++)
	{
		accumulat[i]=(accumulat[i-1]+arr[i])%z;
	}
	for (int i=1; i<=t; i++)
	{
		int a,b;
		cin>>a>>b;
		cout<<((accumulat[b]-accumulat[a-1])+z)%z<<endl;
	}

	//cout<<arr[1]<<endl;

	// your code goes here
	return 0;
}