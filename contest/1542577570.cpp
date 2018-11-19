#include "bits/stdc++.h"

#ifdef PRINTERS
#include "printers.hpp"
using namespace printers;
#define tr(a)		cerr<<#a<<" : "<<a<<endl
#else
#define tr(a)    
#endif
#define int 		long long
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b)	for(int i=a;i<b;i++)
using namespace std;
set<ll>vals[205][55];
int ans[205];
void solve(){
	int n;
	cin>>n;
	vector<string>x(n);
	rep(i,0,n)cin>>x[i];
	rep(i,0,n){
		rep(j,0,sz(x[i])){
			ll cur=0;
			rep(k,j,sz(x[i])){
				cur*=2;
				cur+=x[i][k]-'0';
				if(k-j+1<53)
					vals[i][k-j+1].insert(cur);
				else break;
			}
		}
		rep(j,1,54){
			if(j==53)assert(false);
			if(sz(vals[i][j])==(1LL<<j))ans[i]++;
			else break;
		}
	}
	int m;
	cin>>m;
	x.resize(n+m);
	rep(i,n,n+m){
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		rep(j,0,53){
			for(auto k:vals[a][j])vals[i][j].insert(k);
			for(auto k:vals[b][j])vals[i][j].insert(k);
		}
		reverse(all(x[a]));
		if(sz(x[a])<53)x[i]+=x[a];
		else x[i]+=x[a].substr(0,52);
		reverse(all(x[a]));
		reverse(all(x[i]));
		if(sz(x[b])<53)x[i]+=x[b];
		else x[i]+=x[b].substr(0,52);
		rep(j,0,sz(x[i])){
			ll cur=0;
			rep(k,j,sz(x[i])){
				cur*=2;
				cur+=x[i][k]-'0';
				if(k-j+1<53)
					vals[i][k-j+1].insert(cur);
				else break;
			}
		}
		string temp=x[a]+x[b];
		if(sz(temp)<=104)x[i]=temp;
		else{
			x[i]=temp.substr(0,52)+temp.substr(sz(temp)-52,52);
		}
		rep(j,1,54){
			if(j==53)assert(false);
			if(sz(vals[i][j])==(1LL<<j))ans[i]++;
			else break;
		}
		cout<<ans[i]<<endl;
	}
	rep(i,0,n+m)cerr<<x[i]<<" "<<sz(x[i])<<endl;
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}