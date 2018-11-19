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
        
	string ref;
	cin >> ref;
	int mark1 = 0, mark2 = 0;
	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		if (str == ref) {
			mark1 = 1, mark2 = 1;
		}
		if (str[0] == ref[1]) {
			mark1 = 1;
		}
		if (str[1] == ref[0]) {
			mark2 = 1;
		}
	}
	if (mark1 && mark2) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	#ifdef RKS
        	cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
	return 0;
}