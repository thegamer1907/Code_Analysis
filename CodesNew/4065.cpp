#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
ll n , M;
vector<ll> v , cum , m;

int main(){
	cin >> n >> M;
	
	v.resize(n),cum.resize(n),m.resize(M);
	
	for(ll i = 0 ; i < n ; i++ ){
		
		cin>>v[i];

		if(!i)
			cum[i]=v[i];
		else
			cum[i]=v[i]+cum[i-1];
		
	}
	for(ll i= 0 ; i < M ; i++)
		cin >> m[i];
	for(ll i = 0 , lastpos = 0, last; i < M ; i++ ){

		if(lastpos == 0)
			last = 0;
		else 
			last = cum[lastpos-1];

		ll l = lastpos , r = n-1 , mid , where=-1;
		while(l<=r){
			mid=(l+r)/2;
			if(cum[mid]-last <= m[i]){
				where = mid;
				l=mid+1;
			}else r=mid-1;
		}
		if(where  == -1){
			if(i!=M-1)
				m[i+1] += m[i];
			cout<<n - (lastpos)<<endl;
		}else{
			if(where == n-1){
				lastpos = 0;
				cout<<n<<endl;
			}else{
				cout<<n-(where+1)<<endl;
				lastpos = where+1;
				if(i!=M-1)
					m[i+1]+=(m[i]-(cum[where]-last));
			}
		}

	}

	return 0;
}