#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i = (a); i <= (b); ++i)
#define FORD(i,a,b) for(int i = (a); i >= (b); --i)
#define RI(i,n) FOR(i,1,(n))
#define REP(i,n) FOR(i,0,(n)-1)
#define mini(a,b) a=min(a,b)
#define maxi(a,b) a=max(a,b)
#define mp make_pair
#define pb push_back
#define st first
#define nd second
#define sz(w) (int) w.size()
typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<pii, int> para;
const int inf = 1e9 + 7;
const int maxN = 1e3 + 5;

int n;
string s, str[maxN];
bool suf = false, pref = false;

int main() {
	ios_base::sync_with_stdio(0);
	cin>>s;
	cin>>n;
	REP(i, n) {
		cin>>str[i];
		if (str[i] == s) {
			cout<<"YES";
			exit(0);
		}
		
		if (str[i][1] == s[0]) suf = true;
		if (str[i][0] == s[1]) pref = true;
	}
	if (suf && pref) cout<<"YES"; else cout<<"NO";
	return 0;
}
