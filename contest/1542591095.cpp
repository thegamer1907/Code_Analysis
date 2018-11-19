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
string s, t[105];
int n;

int main () {               	
	DoBetter ();
	cin >> s >> n;
	for (int i = 1;i <= n;i ++) {
		cin >> t[i];
	}
	for (int i = 1;i <= n;i ++) {
		for (int j = 1;j <= n;j ++) {
			string x = t[i] + t[j];
			for (int k = 0;k < sz (x);k ++) {
				string v = x.substr (k, 2);
				if (v == s) {
					cout << "YES";
					return 0;
				}
			}
		}
	}
	cout << "NO";
	
return 0;       
}
            
