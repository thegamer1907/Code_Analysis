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
	string s;
	cin>>s;
	int n;
	cin>>n;
	vector<char>starts,ends;
	rep(i,0,n){
		string k;
		cin>>k;
		if(k==s){
			cout<<"YES\n";
			return;
		}
		starts.pb(k[0]);
		ends.pb(k.back());
	}
	if(count(all(starts),s[1]) and count(all(ends),s[0])){
		cout<<"YES";
	}
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