#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template <class T> int size(const T &x) { return x.size(); }
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define iter(it,c) for(auto it = (c).begin(); it != (c).end();++it)
#define pb push_back
#define fs first
#define sc second
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int INF = ~(1<<31);
const double pi = acos(-1);
const double EPS = 1e-9;

bool head[2500];
vi edg[2500];
int dfs(int at) {
	int mx = 0;
	iter(it,edg[at]) {
		mx = max(dfs(*it), mx);
	}
	return mx+1;
}
int main() {
    cin.sync_with_stdio(false);
	memset(head,0,sizeof(head));
	int n;
	cin >> n;
	rep(i,0,n) {
		int x;
		cin >> x;
		if(x == -1) head[i] = 1;
		else {
			x--;
			edg[x].pb(i);
		}
	}
	int mx = 0;
	rep(i,0,n) if(head[i]) mx = max(mx, dfs(i));
	cout << mx << endl;
    return 0;
}


