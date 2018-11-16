#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) v.begin(),v.end()
#define fastio ios_base::sync_with_stdio(false)
#define txtinput freopen("input.txt","r",stdin);
#define MOD 1000000007
#define rep(i,n) for(ll i=0;i<n;i++)
#define pb push_back

using namespace std;

int main(){
	fastio;
// 	txtinput;
	ll n,t;
	cin>>n>>t;
	string s; cin>>s;
	
	rep(i,t){
		for(ll j=0;j<n-1;){
			if(s[j]=='B' && s[j+1]=='G'){
				swap(s[j],s[j+1]);
				j+=2;
			}
			else j++;
		}
	}
	
	cout<<s;	
	
	return 0;
}