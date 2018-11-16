#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n,t;
	cin>>n>>t;
	char a[n+5];
	for(ll i=0;i<n;i++){
		cin>>a[i];	
	}
	for(ll i=1;i<=t;i++){
		for(ll j=0;j<n;j++){
			if(a[j]=='B'&&a[j+1]=='G'){
				swap(a[j],a[j+1]);
				j++;
			}
		}
	}
	for(ll i=0;i<n;i++){
		cout<<a[i];	
	}
	return 0;
}
