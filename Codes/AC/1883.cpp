#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;
#define pb push_back
#define mp make_pair
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m,k;
	cin>>n>>m>>k;
	ll low = 1,high = n*m+1;
	while(low < high){
		ll mid = (low + high)/2;
		ll ans=0,mark1=0;
		for(ll i=1;i<=n;i++){
			ans+=min(mid/i,m);
			if(mid%i==0 && (mid/i)<=m)
				mark1=1;
		}
		if(mark1)ans--;
		if(ans >= k-1)high = mid;
		else low = mid + 1;
	}
	ll f = low;
	//cout<<f<<'\n';
	ll res = 1000000000000000;
	for(ll i=1;i<=n;i++){
		low = 1,high = m+1;
		while(low < high){
			int mid = (low + high)/2;
			if(i*mid >= f)high = mid;
			else low = mid+1;
		}
		if(low != m+1)
			res = min(res,i*low);
	}
	cout<<res<<'\n';
}