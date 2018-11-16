#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
	ll n,t;
	cin>>n>>t;
	ll* arr=new ll[n];
	ll i,j;
	for(i=1; i<n; i++)
		cin>>arr[i];
	ll k=1;
	while(1)
	{
		if(k==t)
			break;
		if(k>t)
			break;
		k+=arr[k];
	}
	if(k==t)
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
