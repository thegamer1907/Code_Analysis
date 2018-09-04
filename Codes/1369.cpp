#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592654
#define hell 1000000007
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fix(n) cout << fixed << setprecision(n)
#define in1(n) int n;cin>>n
#define in2(a, b) int a,b;cin>>a>>b
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
#define rep(i,a,b) for (__typeof((b)) i=(a);i<(b);i++)
#define repp(i,a,b,p) for(__typeof((b)) i=(a);i<(b);i+=p)
#define ren(i,a,b) for(__typeof((a)) i=(a);i>=(b);i--)
#define ll  long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define pii pair<ull,int>
#define piii pair<pair<int,int>,int>
#define all(v) (v).begin(), (v).end()
#define sz(x) (int)x.size()
#define out(n) cout<<n<<" "
#define outl(n) cout<<n<<endl
// void dfs(vi adj[], int v[], int n, int s){
//     if(v[s])return;
//     v[s]=1;
//     rep(i,0,adj[s].size()){
//         if(!v[adj[s][i]])dfs(adj,v,n,adj[s][i]);
//     }
// }
// void dfs_trav(vi adj[], int n){
//     int v[n] = {0};
//     rep(i,0,n){
//         if(!v[i]){d++;dfs(adj,v,n,i);}
//     }
// }
ull n,s;
ull c=0;
bool fun(vi a, int k){
    vector<ull> b(n);
    rep(i,0,n){
        b[i]=a[i]+(i+1)*k;
    }
    sort(all(b));
    ull sum=0;
    rep(i,0,k){
        sum+=b[i];
    }
    if(sum<=s){c=sum;return 1;}
    else return 0;
}
void solve(){
    cin>>n>>s;
    vi a(n);rep(i,0,n)cin>>a[i];
    ll k,m,l=0,r=n;
    while(l<=r){
        m=(l+r)/2;
        if(fun(a,m)){
            k=m;l=m+1;
        }else r=m-1;
    }
    out(k);out(c);
}
int main(){
	io;
	int t=1;
// 	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}