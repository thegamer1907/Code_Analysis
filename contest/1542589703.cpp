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
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	if(t1>t2)swap(t1,t2);
	int cnt=0;
	if(t1*5<=s and s<=t2*5){
		cnt++;
	}
	if(t1*5<=m+s/60.0 and m+s/60.0<=t2*5){
		cnt++;
	}
	if(t1<=h+m/60.0+s/3600.0 and h+m/60.0+s/3600.0<=t2)cnt++;
	if(cnt==0 or cnt==3)cout<<"YES";
	else cout<<"NO";
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