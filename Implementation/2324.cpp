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

int main(){
	fastio;
	int n;
	
	string s;
	cin>>n>>s;
	lli cont=0;
	rep(i,0,sz(s)-1){
		if(s[i]==s[i+1])
			cont++;
	}
	cout<<cont;


	return 0;
}
