#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define maxn 2000005
#define rep(i,a,n) for(i=a;i<n;i++)

typedef long long ll;
int m=0,ans=0;
bool vis[maxn];
 ll a[maxn];
vector<ll> v[maxn],vec;

void dfs(int i,int c){
    vis[i]=true;
    if(a[i]==1) c++;
    else c=0;
    if(c>m) return;
    if(v[i].size()==1&&i!=1){
        if(c<=m) ans++;
        //cout<<i<<c<<" ";
    }
    for(auto k:v[i]){
        if(!vis[k]) dfs(k,c);
    }
}

int main(){
	int t=1;
	while(t--){
		ll n,i,j;
		cin>>n>>m;
		rep(i,1,1+n) cin>>a[i];
		//rep(i,1,n+1) cout<<a[i];
		rep(i,1,n){
		    int x,y;
		    cin>>x>>y;
		    v[x].pb(y);
		    v[y].pb(x);
		}
		dfs(1,0);
		cout<<ans;
	}
	return 0;
}
