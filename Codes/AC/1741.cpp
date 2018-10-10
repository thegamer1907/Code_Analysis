#include <bits/stdc++.h>

using namespace std;
#define ll long long 
#define MAX 100005
#define BLOCK 320

ll n , m , k ; 

ll countt(ll num){
	ll ans  = 0 ;
	for(int i=1;i<=n;i++){
		ans+=(min(m , num/i));
	}
	return ans;
}

int main(){
	cin>>n>>m>>k;
	ll low = 1;
	ll high = 1e13;
	ll mid = 0 , ans ; 
	while(low<=high){
		mid = (low+high)/2;
        ll val = countt(mid);
        
		if(val>=k){
            //cout<<val<<endl;
			ans=min(ans,mid);
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	cout<<ans<<endl;
}