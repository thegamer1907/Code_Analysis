#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fio ios_base::sync_with_stdio(false)
#define pdl cout << "*" << endl
#define MOD 1000000007
#define INF 1000000000
#define INFLL 1000000000000000000ll
#define m_p make_pair
#define p_b push_back
#define ff first
#define ss second
#define lli long long int 
#define ulli unsigned long long int
using namespace std;
using namespace __gnu_pbds;
typedef pair<int, int> pii;
#define lop(i,a,b) for(lli i=a;i<b;i++)
#define lopr(i,a,b) for(lli i=a;i>=b;i--)

lli exp_mod(lli a,lli b,lli mod){
	lli ret=1;
	while(b){
		if(b%2==1){ ret*=a; ret%=mod; }
		b/=2;
		a=(a*a)%mod;
	}
	return ret;
}
lli inverse_mod(lli a,lli mod){
	return exp_mod(a,mod-2,mod);
}
int is[100005]={0};
vector <int> G[100005];
int ans=0;
void dfs(int node,int pre,int tot,int m){
	if(is[node]==1){ tot++; }
	else{ tot=0; }
	if(tot>m){ return; }
	if(G[node].size()==1 && node!=1){
		if(tot<=m){ ans++; }
		return;
	}
	lop(i,0,G[node].size()){
		if(G[node][i]!=pre){
			dfs(G[node][i],node,tot,m);
		}
	}
}
int main(){
    fio;
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    lop(i,1,n+1){ cin>>is[i]; }
    lop(i,0,n-1){
    	int x,y;
    	cin>>x>>y;
    	G[x].p_b(y);
    	G[y].p_b(x);
    }
    dfs(1,0,0,m);
    cout<<ans<<endl;
    return 0;
} 