#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll n,m,k;cin>>n>>m>>k;
	ll p[m]; 
	for(int i=0;i<m;i++) cin>>p[i];
//	for(int i=0;i<m;i++) cout<<p[i+1];
	ll x=0,i=0,j=0,ans=0;
	while(j<m){
		if(x==0) i+=k;
		else i+=x;
		x=0;
		while(j<m&&p[j]<=i){
			x++;
			j++;
			
		}
		if(x) ans++;
	}
	cout<<ans;
	
}