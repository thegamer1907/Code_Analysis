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
#define debarr(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debmat(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class S, class T>ostream& operator <<(ostream& os, const pair<S, T>& p) {return os << "(" << p.first << ", " << p.second << ")";}
template <class T>ostream& operator <<(ostream& os, const vector<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const unordered_set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const unordered_map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}
template <class T> void prc(T a, T b) {cerr << "["; for (T i = a; i != b; ++i) {if (i != a) cerr << ", "; cerr << *i;} cerr << "]\n";}

void pre(){

}
vector<lli> z_function(string &s) {
	lli n=s.length();
	vector<lli> z(n);
	for (lli i=1, l=0, r=0; i<n; ++i) {
		if (i <= r) {
			z[i] = min(r-i+1, z[i-l]);
		}
		while (i+z[i]<n && s[z[i]] == s[i+z[i]]) {
			++z[i];
		}
		if (i+z[i]-1 > r) {
			l = i, r = i+z[i]-1;
		}
	}
	return z;
}
void solve(){
	string s;
	cin>>s;
	lli n=s.length();
	int i,j,b[n+1];
	i=0;j=-1;b[0]=-1;
	while(i<n){
		while(j!=-1&&s[i]!=s[j])j=b[j];
		i++;j++;
		b[i]=j;
	}

	vi zval=z_function(s);
	unordered_map<lli,lli> mp;
	fr(i,n){
		mp[b[i]]++;
	}
	for(int i=1;i<n;i++){
		if(i+zval[i]==n&&mp[zval[i]]>=1){
			cout<<s.substr(i)<<endl;
			return;
		}
	}
	cout<<"Just a legend"<<endl;
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