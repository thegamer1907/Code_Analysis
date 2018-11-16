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
#define rrep(i,a,b,j,c,d) for(int i = int(a); i <int(b);i++) for(int j = int(c); j <int(d);j++)
using namespace std;

typedef long long lli;
typedef pair<lli, lli> ii;
typedef vector<int> vi;
typedef vector<ii> vii;


int main(){
	fastio;
	int que,a,b,sum=0; string s;
	cin>>s;
	vi dp;
	dp.pb(0);
	rep(i,0,sz(s)-1) (s[i]==s[i+1])? dp.pb(sum+=1) : dp.pb(sum);
	cin>>que;
	rep(i,0,que){
		cin>>a>>b;
		cout<<(dp[--b]-dp[--a])<<endl;
	}

	return 0;
}