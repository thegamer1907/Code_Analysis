#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N=100001;

ll pan[4];
ll tiene[4];
ll pre[4];

//

ll f(ll x){
	ll cer=0;
	ll sum=max(cer,pan[0]*x-tiene[0])*pre[0]+max(cer,pan[1]*x-tiene[1])*pre[1]+max(cer,pan[2]*x-tiene[2])*pre[2];
	return sum;
}

ll bb(ll l, ll r, ll val){
	while(l!=r){
		ll med=(l+r)/2;
		if(f(med)<val){
			l=med+1;
		}else{
			r=med;
		}
	}
	if(f(l)>val){
		l--;
	}
	return l;
}

int main(){
	string k;
	getline(cin,k);
	for(ll i=0; i<k.size(); i++){
		if(k[i]=='B'){
			pan[0]++;
		}
		if(k[i]=='S'){
			pan[1]++;
		}
		if(k[i]=='C'){
			pan[2]++;
		}
	}
	cin>>tiene[0]>>tiene[1]>>tiene[2];
	cin>>pre[0]>>pre[1]>>pre[2];
	ll cost;
	cin>>cost;
	cout<<bb(0,100000000000000,cost)<<endl;
	return 0;
}