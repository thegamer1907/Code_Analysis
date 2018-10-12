#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N=300001;

ll A[N];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,k;
	cin>>n>>k;
	ll ceros=0;
	for(ll i=0; i<n; i++){
		cin>>A[i];
		if(A[i]==0){
			ceros++;
		}
	}
	if(k==0){
		ll ini=-1;
		ll fin=-1;
		ll mx=0;
		for(ll i=0; i<n; i++){
			if(A[i]==1){
				if(ini==-1){
					ini=i;
					fin=i;
				}else{
					fin=i;
				}
			}else{
				if(ini!=-1){
					mx=max(mx,fin-ini+1);
				}
				ini=-1;
			}
		}
		if(ini!=-1){
			mx=max(mx,fin-ini+1);
		}
		cout<<mx<<endl;
		for(ll i=0; i<n; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
		return 0;
	}
	if(ceros<=k){
		cout<<n<<endl;
		for(ll i=0; i<n; i++){
			cout<<1<<" ";
		}
		cout<<endl;
		return 0;
	}
	ll ini=0;
	ll fin=0;
	ll cnt=(A[0]==0 ? 1:0);
	ll mx=0;
	ll x,y;
	while(fin<n){
		while(cnt!=k){
			fin++;
			if(A[fin]==0){
				cnt++;
			}
		}
		while(fin+1<n && A[fin+1]==1){
			fin++;
		}
		if(mx<fin-ini+1){
			mx=fin-ini+1;
			x=ini;
			y=fin;
		}
		if(A[ini]==0){
			cnt--;
		}
		ini++;
	}
	cout<<y-x+1<<endl;
	for(ll i=0; i<n; i++){
		if(x<=i && i<=y){
			cout<<1<<" ";
		}else{
			cout<<A[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}

