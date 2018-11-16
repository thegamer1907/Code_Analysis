#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,m;
	cin>>n>>m;
	ll a[n-1],sum=0;
	for(ll i=0;i<n-1;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<"YES";
		exit(0);
	}
	else{
	for(ll i=0;i<n-1;i++){		
		i=i+a[i];
		//cout<<i+1<<" ";
		if(i+1==m){
			cout<<"YES";
			exit(0);
		}
		i--;
	}
	cout<<"NO";
}
}