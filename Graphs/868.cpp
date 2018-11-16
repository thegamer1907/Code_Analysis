#include<bits/stdc++.h>
using namespace std;
int i,j,k,l,m,n,a[40009];
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>k;
	for(int i=1; i<n; i++) cin>>a[i];
	i=1;
	while(i<k)
	{
		i+=a[i];
		if(i==k) return cout<<"YES",0;
	}
	cout<<"NO";
}
