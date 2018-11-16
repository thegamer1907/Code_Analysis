#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	 static ll n,t;
	cin>>n>>t;
	ll a[n];
	for(ll i=1;i<n;i++){
		cin>>a[i];
	}
	ll i=1;
	loop: if(a[i]+i==t){
		  cout<<"YES";
		  return 0;
	 	}
	 	else {
			i=a[i]+i;
			if(i<n){
			goto loop;}
	 	}
	cout<<"NO";
	return 0;
	
	
}