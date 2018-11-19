#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define iter(it,c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end();++it)
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
const int INF = ~(1<<31);
const double pi = acos(-1);

int got[100020][5];

int n,k;
int memo[100020][3][3][3][3][3];

bool dp(int at, int f1, int f2, int f3, int f4, int total) {
	if(total >= 3) return false;
	if(total == 1) {
		if(f1+f2+f3+f4 == 0) return true;
	}
	if(total == 2) {
		if(f1 < 2 && f2 < 2 && f3 < 2 && f4 < 2) return true;
		return false;
	}
	if(at >= n) return false;
	if(memo[at][f1][f2][f3][f4][total] != -1) return memo[at][f1][f2][f3][f4][total];
	return memo[at][f1][f2][f3][f4][total] =  dp(at+1,f1,f2,f3,f4,total) || dp(at+1, f1+got[at][0], f2+ got[at][1], f3+got[at][2], f4+got[at][3], total+1);;
}

int main() {
	cin.sync_with_stdio(false);
	memset(memo,-1,sizeof(memo));
	memset(got,0,sizeof(got));
	cin >> n >> k;
	rep(i,0,n) {
		rep(a,0,k) cin >> got[i][a];
	}
	if(dp(0,0,0,0,0,0)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}

