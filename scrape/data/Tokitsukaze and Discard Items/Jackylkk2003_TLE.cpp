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
			while(t>p)p+=k;
		}
		temp++;
		if(temp==1)cnt++;
	}
	cout<<cnt;
}