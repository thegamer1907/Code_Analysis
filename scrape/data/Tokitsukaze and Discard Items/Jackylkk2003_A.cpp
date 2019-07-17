#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,m,k;
	cin>>n>>m>>k;
	ll p=0,temp=0,cnt=0;
	for(int i=0;i<m;i++){
		ll t;
		cin>>t;
		if(t>p){
			//cout<<t<<" "<<p<<"\n";
			p+=temp;
			temp=0;
			if(t>p)p+=k*((ll)ceil(1.0*(t-p)/k));
		}
		temp++;
		//cout<<t<<" "<<p<<"\n";
		if(temp==1)cnt++;
	}
	cout<<cnt;
}