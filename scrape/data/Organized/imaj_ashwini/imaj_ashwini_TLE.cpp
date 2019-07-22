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
	ll steps=0;
	ll dlt=0;
	int i=1;
	while(i*k+dlt<=n){
		//cout<<"f: "<<i*k+dlt<<endl;
		ll r = upper_bound(P.begin(),P.end(),i*k+dlt)-P.begin();
		if(r==dlt){
			//cout<<"inc i"<<endl;
			i++;
		}
		if(r>dlt){
			steps++;
		}
		dlt=r;

	}
	//cout<<"g: "<<i*k+dlt<<endl;
	ll r = upper_bound(P.begin(),P.end(),i*k+dlt)-P.begin();
	
	if(r>dlt){
		steps++;
	}
	cout<<steps;

}