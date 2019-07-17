#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,m,k;
	priority_queue<ll> pq;
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		ll a;
		cin>>a;
		pq.push(-a);
	}
	ll l = 1;
	ll r = k;
	ll ans = 0;
	while(!pq.empty()){
		ll cnt = 0;
		bool cek = false;
		while(!pq.empty()){
			if((-pq.top())<=r){
				cnt++;
				//cout<<pq.top()<<endl;
				cek = true;
				pq.pop();
			} else{
				r = r+cnt;
				break;
			}
		}
		if(cek){
			ans++;
			//cout<<"-------------------"<<endl;
		} else {
			l = r+1;
			r = l+k-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}