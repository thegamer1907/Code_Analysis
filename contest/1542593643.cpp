#include<bits/stdc++.h>

#define mst(a, b) memset(a, b, sizeof(a))
#define clr(a) mst(a, 0)
#define inf 0x3f3f3f3f
#define pb push_back
#define mp make_pair
#define sz(x) (int)x.size()
#define lowbit(x) (x&(-x))
#define fi first
#define se second
#define rep(i, a, b) for(int i = a; i <= b; i++)
#define per(i, a, b) for(int i = a; i >= b; i--)

#define pr(x) cout << #x << " = " << x << endl;

using namespace std;

const int mod = 1e9 + 7;
const int N = 1e2 + 5;

typedef long long ll;
typedef vector<int> V;
typedef pair<int, int> P;
string s, t[N];
int n;
int main() {
	//freopen("a.in", "r", stdin);
	//freopen("a.out", "w", stdout);
	cin >> s >> n;
	int flag1 = 0, flag2 = 0;
	rep(i, 1, n) {
		cin >> t[i];
		if(t[i] == s) {
			cout << "YES";
			return 0;
		}
		if(t[i][0] == s[1]) {
			flag1 = 1;
		}
		if(t[i][1] == s[0]) {
			flag2 = 1;
		}
	}
	if(flag1 && flag2) {
		cout << "YES";
		return 0;
	}
	cout << "NO";
}


