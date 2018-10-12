#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
#define md ll(1000000007)
#define for(i,a,b) for(ll i=a; i<b; i++)
#define pb push_back
#define po pop_back
#define vll vector<ll>
#define ff first
#define ss second

int main(){
	ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);

	ll n, q; cin>>n>>q;
	vll a(n), s(n+1);
	for(i,0,n){
		cin>>a[i];
	}
	for(i,0,n){
		s[i+1]=s[i]+a[i];
	}
	ll pos=0, left=0, temp=0;
	while(q--){
		ll k; cin>>k;
		if(k>=left){
			k-=left;
			temp=pos;
			pos=lower_bound(s.begin()+temp, s.end(), k+s[temp])-s.begin();
			if(pos>n){
				cout<<n<<endl;
				left=0; pos=0;
				continue;
			}
			left=s[pos]-(k+s[temp]);
			if(left==0){
				if(n-pos==0){
					pos=0;
				}
				cout<<n-pos<<endl;
			}
			else{
				cout<<n+1-pos<<endl;
			}
		}
		else{
			left-=k;
			cout<<n+1-pos<<endl;
		}
	}
	return 0;
}