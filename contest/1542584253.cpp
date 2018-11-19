#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define mp make_pair
#define f first
#define s second
#define kz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FILE ""
#define fr freopen(FILE".in", "r", stdin); freopen(FILE".out", "w", stdout);
#define y1 asafas
#define x0 afasfa
#define y0 safasf
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int N = 3e5 + 111, inf = 1e9, mod = 1e9 + 7;
const ll linf = 1e18;

int n, k;
bool oka;
int m[N];

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; ++i){
	    bool ok = 1;
	    int ma = 0;
		for(int j = 1, x; j <= k; ++j){
			scanf("%d", &x);
			ma = ma * 2 + x;
			if(!x)
				ok = 0;
		}
		m[ma]++;         
		if(ok)
			oka = 1;
	}
	if(m[0]){
		cout << "YES";
		return 0;
	}
	for(int i = 0; i < (1 << k); ++i)
	for(int j = 0; j < (1 << k); ++j){
		int ok = 0;
		for(int q = 0; q < k; ++q)
			if(!((i >> q) & 1) || !((j >> q) & 1))
				ok++;
		if(ok == k && m[i] && m[j]){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}