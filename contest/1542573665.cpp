#include <bits/stdc++.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define pii pair < int , int >
#define task ""

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int N = 2e5 + 123;
const int mod = 1e9 + 7;
const int INF = 1e9 + 1;
const ll INFL = 3e18 + 1;
const double pi = acos(-1.0);

inline void DoBetter () {
    unsigned int FOR;
    asm("rdtsc" : "=a"(FOR));
    srand (FOR);
    ios_base::sync_with_stdio (0);
    cin.tie (0); cout.tie (0);
}
int n, k, cnt[N];
set < string > st;
string s[N];

int main () {               	
	DoBetter ();
	cin >> n >> k;
	for (int i = 1;i <= n;i ++) {
		string x = "";
		for (int j = 1;j <= k;j ++) {
			int y; cin >> y;
			x += (y + '0');			
		}
		st.insert (x);
	}	
	int K = 0;
	for (auto i : st) s[++ K] = i;
	for (int i = 1;i <= K;i ++) {
		for (int j = 1;j <= K;j ++) {
			bool fail = 0;
			for (int l = 0;l < sz (s[i]);l ++) {
				if (((s[i][l] - '0') & (s[j][l] - '0'))) {
					fail = 1;
					break;
				}
			}
			if (!fail) return cout << "YES", 0;
		}
	}
	cout << "NO";

return 0;       
}
            
