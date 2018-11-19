#include <bits/stdc++.h>

#define TASK "1"
#define fi first
#define se second
#define ss stringstream  
#define pb push_back
#define dbg(x) cout << #x << " " << x << '\n';
#define all(a) (a).begin(), (a).end()
#define m0(x) memset(x, 0, sizeof(x))
#define pw(x) (1LL << (x))
#define buli(x) __builtin_popcountll(x)

using namespace std;

typedef long long ll;
typedef long double ld;    
typedef vector <int> vi;
typedef pair <int, int> pii;

const int inf = 1e9 + 7;
const ld eps = 1e-9;
                                                       
inline bool EQ(ld a, ld b) { return fabs(a-b) < 1e-9; }

/* --- main part --- */

const int N = 1e5 + 10;

int main() {
    #ifdef RKS
	//	freopen(TASK".in", "r" ,stdin);	
	//	freopen(TASK".out", "w", stdout);
	#endif
        
	int arr[216005];
	m0(arr);
	int h, m, s;
	cin >> h >> m >> s;
	arr[(5 * h * 60 * 60 + m * 60 + s) % 216000]++;
	arr[((m * 60 + s) * 60) % 216000]++;
	arr[(s * 60 * 60) % 216000]++;
	int flag1 = 1, flag2 = 1;
	int ans = 0;
	int t1, t2, x, y;
	cin >> t1 >> t2;
	t1 *= 5;
	t1 *= 3600;
	t1 %= 216000;
	t2 *= 5;
	t2 *= 3600;
	t2 %= 216000;
	x = min(t1, t2);
	y = max(t1, t2);
	for (int i = x; i <= y; ++i) {
		ans += arr[i % 216000];
	}
	if (ans == 0 || ans == 3) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	
	#ifdef RKS
        	cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
	return 0;
}