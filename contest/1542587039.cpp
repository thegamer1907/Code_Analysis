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
const int N = 1e6 + 5;

typedef long long ll;
typedef vector<int> V;
typedef pair<int, int> P;
double get(double & du) {
	if(du >= 60) {
		du -= 60;
	}
}
int h, m, s, t1, t2;
int main() {
	//freopen("a.in", "r", stdin);
	//freopen("a.out", "w", stdout);
	cin >> h >> m >> s >> t1 >> t2;
	double dus = s;
	double dum = m + 1.0 * s / 60;
	double duh = h * 5 + 1.0 * m / 60 + 1.0 * s / 3600;
	get(dum); get(duh); get(dus);
	double du1 = t1 * 5;
	double du2 = t2 * 5;
	int flag = 0;
	get(du1);
	get(du2);
	if(du1 > du2) swap(du1, du2);
	if(du1 < dus && dus < du2) {
		flag++;
	}
	if(du1 < duh && duh < du2) {
		flag++;
	}
	if(du1 < dum && dum < du2) {
		flag++;
	}
	if(flag == 3 || flag == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
/*	pr(du1);
	pr(du2);
	pr(duh);
	pr(dum);
	pr(dus);*/
}


