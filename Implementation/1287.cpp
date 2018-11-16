#include <bits/stdc++.h>
#define ll             	long long
#define pb             	push_back
#define mp             	make_pair
#define pii            	pair<int,int>
#define pll            	pair<long,long>
#define vi             	vector<int>
#define F              	first
#define S              	second
#define sz(x)          	(int)x.size()
#define MOD           	1000000007
#define MOD2          	1000000009
#define endl            "\n"
#define vl             	vector<long>
#define inf            	999999999999999999
#define sp(x)           fixed<<setprecision(x)
#define rep(i,k,n)      for(i = k; i < n; ++i)
#define repr(i,k,n)     for(i = k; i >= n; --i)
using namespace std;



void solve(){
    int i,j;
    int n,m,t;
    string s;
    cin >> n>>t>>s;
    rep(j,0,t){
        rep(i,0,n-1){
            if(s[i]=='B'&&s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    
    return 0;
}