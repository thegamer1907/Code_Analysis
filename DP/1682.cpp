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
	string s;
	cin>>s;
	vi v1,v2;
	rep(i,0,sz(s)-1){
		char a=s[i],b=s[i+1];
		if(a=='A' and b=='B') v1.pb(i);
		if(a=='B' and b=='A') v2.pb(i);
	}
	bool chi=true;
	rep(i,0,sz(v1)){
		rep(j,0,sz(v2)){
			if(v2[j]>=v1[i]+2 or v2[j]<=v1[i]-2){
				chi=false;
				break;
			}
		}
	}

	if(!chi) cout<<"YES";
	else cout<<"NO";



	return 0;
}
