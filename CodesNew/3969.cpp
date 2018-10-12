#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<ll,ll>
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define repd(i,a,b) for(ll i=a;i>=b;--i)
#define mit(m) for(map<int, int > :: iterator it=m.begin();it!=m.end();++it)
#define mp make_pair
#define hell 1000000007
#define endl '\n'
#define vvll vector<vector<ll> >
#define vll vector<ll>
#define mint map<int,int> 
#define int long long
#define sll set<int>
#define pll pair<int,int>

const int sz=2e5+5;
int a[sz],k[sz],s[sz];
void solve(){
	int n,q;
	cin>>n>>q;
	rep(i,1,n+1){
		cin>>a[i];
	}
	rep(i,0,q){
		cin>>k[i];
	}
	rep(i,1,n+1){
		s[i]=s[i-1]+a[i];
	}
	int cs=0;
	rep(i,0,q){
		cs+=k[i];
		int ind=upper_bound(s+1,s+n+1,cs)-s-1;
		if(ind==n){
			ind=0;
			cs=0;
		}
		cout<<n-ind<<endl;
		
	}



	
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}