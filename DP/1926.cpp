#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,m,cnt=0,cnt1=0;
	cin>>n>>m;
	ll a[n],b[m],e[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];				
	}
	for(ll i=0;i<m;i++){
		cin>>b[i];
	}
	ll c[100001];
	ll d[100001];
	for(ll i=0;i<=100000;i++){
		c[i]=0;
		d[i]=0;
	}
	for(int i=0;i<n;i++){
	if(d[a[i]]==0){
		d[a[i]]=1;
		cnt++;
	}
	}
	for(int i=0;i<n;i++){
		c[a[i]]++;		
	}
	for(int i=0;i<n;i++){
		c[a[i]]--;
		e[i]=cnt-cnt1;
		if(c[a[i]]==0){
			cnt1++;
		}
	}
	for(ll i=0;i<m;i++){
		cout<<e[b[i]-1]<<"\n";
	}
	
}