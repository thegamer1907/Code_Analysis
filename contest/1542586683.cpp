#include "bits/stdc++.h"

#ifdef PRINTERS
#include "printers.hpp"
using namespace printers;
#define tr(a)		cerr<<#a<<" : "<<a<<endl
#else
#define tr(a)    
#endif

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

void solve(){
	int n,k;
	cin>>n>>k;
	vector<pair<pii,int>>cnt(1<<k);
	rep(i,0,1<<k){
		cnt[i].F.S=i;
		cnt[i].F.F=__builtin_popcount(i);
	}
	rep(i,0,n){
		int cur=0;
		rep(j,0,k){
			int temp;
			cin>>temp;
			cur*=2;
			cur+=temp;
		}
		cnt[cur].S++;
	}
	if(cnt[0].S){
		cout<<"YES";
		return;
	}
	rep(i,1,1<<k){
		rep(j,1,1<<k){
			if((i&j)==0 and cnt[i].S and cnt[j].S){
				cout<<"YES";
				return;
			}
		}
	}
	cout<<"NO";
}

int main(){
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