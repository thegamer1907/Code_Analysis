#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i =0;i<n;i++)
#define pb push_back
#define ll long long
#define F first
#define S second
#define mp make_pair

ll a[100005];
ll t,n;

int bs(ll b)
{
	int l = 1;
	int h = n;
	int ans = 0;
	while(l<=h)
	{
		int m = (l+h)/2;
		if(a[m]<=b) ans = m,l = m+1;
		else h = m-1;
	}
	return ans;
}

int main(){

	ios_base::sync_with_stdio(false),cin.tie(0);cout.precision(17);
	
	cin>>n>>t;
	a[0] = 0;
	for(int i = 0;i<n;i++) 
	{
		cin>>a[i+1];
		a[i+1] += a[i];
	}
	int ans = 0;
	fori(i,n)
	{
		ans = max(ans,bs(a[i]+t) - i);
	}
	cout<<ans;
	return 0;
}		