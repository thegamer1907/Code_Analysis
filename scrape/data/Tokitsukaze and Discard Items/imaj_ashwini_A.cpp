#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll n,m,k;
	cin>>n>>m>>k;
	vector<ll> P;
	for(ll i=0;i<m;i++){
		ll p;
		cin>>p;
		P.push_back(p);
	}
	ll dlt=0;
	ll bucket=-1;
	ll steps=0;
	for(ll i=0;i<m;i++){
		ll x=P[i];
		ll buck = (x-1-i)/k;

		if(buck==bucket){
			//cout<<"x: "<<x<<" bucket: "<<bucket<<"buck: "<<buck<<endl;
			steps++;
			//cout<<"steps: "<<steps<<endl;
			ll x = bucket*(k) + k + i;
			i = upper_bound(P.begin(),P.end(),x)-P.begin();
			i--;
		}
		else{
			//cout<<"y: "<<x<<" bucket: "<<bucket<<"buck: "<<buck<<endl;
			bucket = buck;
			steps++;
			//cout<<"steps: "<<steps<<endl;
			ll x = bucket*(k) + k + i;
			i = upper_bound(P.begin(),P.end(),x)-P.begin();
			i--;
		}

	}
	cout<<steps;
}