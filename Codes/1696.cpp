#include<bits/stdc++.h>

using namespace std;
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ff first.first
#define fs first.second
typedef long long ll;
typedef unsigned long long ull;

//const ll mod = 1e16+371;
//const ll mod = 1e12+193;
//const int mod = 1e9+7;

const double PI = acos(-1);
//const ll mod = 1e9+7;
const ll INF = 1e18;
const ll MAX=1e5+10, N=1e5+10;
const int lim=1<<18;
const ll mod = 1e9+7;
const int sz=710;


int main(){
	ios_base::sync_with_stdio(0);
	//	cin.tie(0);
	//	srand(time(0));


	ll n,m,k;
	while(cin>>n>>m>>k){
		ll s=1,e=n*m;
		ll ans=0;
		while(s<=e){
			ll mid=(s+e)/2;
			ll less=0,more=0;
			for(ll i=1;i<=n;i++){
				more+=(m-min(m,mid/i));
				less+=min(m,mid/i);
				if((mid+i-1)/i<=m&&mid%i==0)
					less--;
			}
//			cerr<<mid<<" "<<less<<" "<<more<<endl;
			if(k>less&&k<=n*m-more){
				ans=mid;
				break;
			}
			if(k<=less)
				e=mid-1;
			else
				s=mid+1;
		}
		cout<<ans<<endl;
	}

	return 0;
}
