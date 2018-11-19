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

int main() {
	cin.sync_with_stdio(false);
	string ok;
	cin >> ok;
	int n;
	cin >> n;
	vector<string> k(n);
	rep(i,0,n) {
		cin >> k[i];
	}
	bool valid = false;
	rep(i,0,n) rep(a,0,n) {
		if(k[i] == ok || k[a] == ok) {
			valid = true;
		}
		if(k[i][1] == ok[0] && k[a][0] == ok[1]) {
			valid = true;
		}
	}
	cout << (valid ? "YES" : "NO") << endl;
	return 0;
}

