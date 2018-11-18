#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define EB emplace_back
#define MP make_pair
#define all(o) (o).begin(), (o).end()
#define mset(m,v) memset(m,v,sizeof(m))
#define fr(i,n) for(lli i=0;i<n;++i)
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))
#define endl '\n'
typedef long long int lli;
typedef long double ld;
typedef pair< lli,lli > ii;
typedef vector<lli> vi;
typedef vector<ii> vii;
typedef vector<vi> graph;
lli MOD=1000000007;long double EPS=1e-9;
#define debarr(a,n) cout<<#a<<" : ";for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debmat(mat,row,col) cout<<#mat<<" :\n";for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class S, class T>ostream& operator <<(ostream& os, const pair<S, T>& p) {return os << "(" << p.first << ", " << p.second << ")";}
template <class T>ostream& operator <<(ostream& os, const vector<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const unordered_set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const unordered_map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const multiset<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}
template <class T> void prc(T a, T b) {cerr << "["; for (T i = a; i != b; ++i) {if (i != a) cerr << ", "; cerr << *i;} cerr << "]\n";}


void pre(){

}

lli dp[22][100100];
int arr[100100];
int f[100100];
lli ans=0;
int curl=1;int curr=0;


lli cost(int i,int j){
	while(curl>i)ans+=f[arr[--curl]]++;
	while(curr<j)ans+=f[arr[++curr]]++;
	while(curl<i)ans-=--f[arr[curl++]];
	while(curr>j)ans-=--f[arr[curr--]];
	return ans;
}

void dnc(int k,int l,int r,int opl,int opr){
	//pr(k,l,r,opl,opr);
	if(l>r)return;
	int mid=(l+r)>>1;
	int opt=-1;
	dp[k][mid]=MOD*MOD;
	rep(i,opl,min(opr,mid)){
		lli temp=dp[k-1][i-1]+cost(i,mid);
		if(temp<dp[k][mid]){
			dp[k][mid]=temp;
			opt=i;
		}
	}
	dnc(k,l,mid-1,opl,opt);
	dnc(k,mid+1,r,opt,opr);
}

void solve(){
	lli n,k;
	cin>>n>>k;
	rep(i,1,n)cin>>arr[i];
	rep(i,1,n)dp[0][i]=MOD*MOD;
	rep(kk,1,k){
		dnc(kk,1,n,1,n);
	}
	cout<<dp[k][n]<<endl;


}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	pre();
	int t=1;
	//cin>>t;
	for(int i=1;i<=t;i++){
		//cout<<"Case #"<<i<<": ";
		solve();
	}
}