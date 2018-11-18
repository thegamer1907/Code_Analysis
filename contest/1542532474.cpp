#include<bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x, v) memset((x), (v), sizeof(x))
#define db(x) cerr << #x << " == " << x << endl
#define dbs(x) cerr << x << endl
#define _ << ", " <<
#define gcd(x, y) __gcd((x), (y))

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vii;

const ld EPS = 1e-9, PI = acos(-1.);
const ll LINF = 0x3f3f3f3f3f3f3f3f, LMOD = 1011112131415161719ll;
const int INF = 0x3f3f3f3f, MOD = 1e9+7;
const int N = 1e3+5;

int main() {
	string pw;
	cin >> pw;

	int n; cin >> n;

	bool ok1 = false, ok2 = false, ok3 = false;;
	while (n--) {
		char a, b; cin >> a >> b;


		if (a == pw[0] and b == pw[1]) ok3 = true;
		if (a == pw[1]) ok1 = true;
		if (b == pw[0]) ok2 = true;
	}

	printf("%s\n",(ok3 or (ok1 and ok2)) ? "YES" : "NO");

	return 0;
}
