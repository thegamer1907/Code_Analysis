#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define sz(x) int(x.size())
#define all(v) (v).begin(), (v).end()
#define trace(x) cerr << #x << ": " << x <<endl;
#define rep(i,a,b) for(int i = int(a); i <int(b);i++)
//#define rrep(i,a,b,j,c,d) for(int i = int(a); i <int(b);i++) for(lli j = lli(c); j <lli(d);j++)
using namespace std;

typedef long long int lli;
typedef pair<lli, lli> ii;
typedef vector<lli> vi;
typedef vector<ii> vii;

	set<lli> s;
	map<lli,lli> mm;

int main(){
	fastio;
	int n,m,num;
	cin>>n>>m;
	vi a,l;
	rep(i,0,n){
		cin>>num;
		a.pb(num);
	}
	rep(i,0,m){
		cin>>num;
		l.pb(num-1);
	}
	
	lli cont=0;
	for(lli i=sz(a)-1;i>=0;i--){
		if(!s.count(a[i])) cont++, s.insert(a[i]);
		mm[i]=cont;
	}

	rep(i,0,m) cout<<mm[l[i]]<<endl;


	return 0;
}
