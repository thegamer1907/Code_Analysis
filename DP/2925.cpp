#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main(){
	ll n, k;
	cin>>n>>k;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll b[k];
	for(ll i=0;i<k;i++){
		cin>>b[i];
	}
	int check=0;
	ll prev = a[0];
	for(ll i=1;i<n;i++){
		if(a[i]==0)continue;
		else{
			if(prev>a[i]){
				check=1;
				break;
			}
			prev = a[i];
		}
		if(check==1)break;
	}
	if(check==1)cout<<"Yes"<<endl;
	else{
		if(k>1)cout<<"Yes"<<endl;
		else{
			ll pos=-1;
			for(ll i=0;i<n;i++){
				if(a[i]==0){
					pos= i;
					break;
				}
			}
			if(pos==0){
				if(b[0]>a[1])cout<<"Yes"<<endl;
				else cout<<"No"<<endl;
			}
			else if(pos== n-1){
				if(a[n-2]>b[0])cout<<"Yes"<<endl;
				else cout<<"No"<<endl;
			}
			else if(b[0]<a[pos-1] || b[0]>a[pos+1]){
				cout<<"Yes"<<endl;
			}
			else cout<<"No"<<endl;
		}
	}
}