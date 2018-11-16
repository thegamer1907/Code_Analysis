#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define MOD 1000000007
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define FOR(a,n) for(int i=a;i<n;++i)
#define arrin(n) for(int i=0; i < n; ++i) cin>>arr[i];
#define arrout(n) for(int i=0; i < n; ++i) cout<<arr[i]<<" ";cout<<nl;
#define nl "\n"
#define mp make_pair
#define trace1(x)                cerr<<#x<<": "<<x<<endl
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
using namespace std;

vector<int> v[20001];

int f(int u){
	if(!v[u].size()){
		return 1;
	}
	int tmp=0;
	for(int i=0;i<v[u].size();i++)tmp=max(tmp,1+f(v[u][i]));
	return tmp; 
}
int main(){  
 fastio();  
 int n;
 cin>>n;
 vector<int> rt;
 for(int i=1;i<=n;i++){
 	int x;cin>>x;
 	if(x==-1) rt.pb(i);
 	else v[x].pb(i);
 }
 int ans=1;
 for(int i=0;i<rt.size();i++) ans=max(ans,f(rt[i]));
 	cout<<ans;
 return 0;



}	