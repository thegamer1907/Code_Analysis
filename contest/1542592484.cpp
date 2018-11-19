#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define RREP(i,a,b) for(int i=(a);i>=(b);i--)
typedef long long ll; typedef long double ld;
using namespace std;
const int INF=1e9, MOD=1e9+7;
int n;
string s,w;
set<char> st1,st2;

int main(){
	cin >> s >> n;
	REP(i,0,n){
		cin >> w;
		if(s==w){cout << "YES" << endl; return 0;}
		st1.insert(w[0]);
		st2.insert(w[1]);
	}
	
	cout << (st1.count(s[1])&&st2.count(s[0])?"YES":"NO") << endl;
	return 0;
}
