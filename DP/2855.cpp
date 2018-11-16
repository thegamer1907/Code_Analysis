#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<ll,ll>
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define repd(i,a,b) for(ll i=a;i>=b;--i)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mit(m) for(map<ll,ll> :: iterator it=m.begin();it!=m.end();++it)
#define mp make_pair
#define hell 1000000007
#define vvll vector<vector<ll> >
#define vll vector<ll>
#define int long long
#define sz (int)(2e3+5)



int dp[sz][sz];
int n,k;
vll fac[sz];

void prep(){
	rep(i,1,2001){
		rep(j,1,i+1){
			if(i%j==0){
				fac[i].pb(j);
			}

		}
	}
}

void build(){

	rep(i,1,n+1){
		dp[i][1]=1;
	}
	rep(i,2,k+1){
		rep(j,1,n+1){
			
			rep(k,0,fac[j].size()){
				dp[j][i]+=dp[fac[j][k]][i-1];
				dp[j][i]%=hell;
			}
		}
	}


}

signed main(){
	fastio;

	cin>>n>>k;

	prep();
	build();
	int v=0;
	rep(i,1,n+1){

		

		v+=dp[i][k];
		v%=hell;
	}
	cout<<v;
}