#include<bits/stdc++.h>

#define _USE_MATH_DEFINES
#define ll long long
#define ins Not Needed Thing
#define ull unsigned long long
#define ld long double
#define Accepted 0
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define sz(x) (int)(x.size())
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define emp What is it
#define SORRY FUL Accepted 
#define dimash the top one
#define I wish 
#define you be a little more calm
#define SpeedForce ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

const double eps = 0.000001;
const ld pi = acos(-1);
const int maxn = 1e7 + 9;
const int mod = 1e9 + 7;
const ll MOD = 1e18 + 9;
const ll INF = 1e18 + 123;
const int inf = 2e9 + 11;
const int minn = 1e5 + 9;
const int N = 5e3 + 123;                                          
const int NN = 5e5 + 123;
const int PRI = 555557;
const int pri = 997;

int tests = 1;
int n, m, k, a[NN], cnt, ans;
bool u[NN], bad[NN];
vector <int> g[NN];

inline void Solve () {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h *= 5; t1 *= 5; t2 *= 5;
	h %= 60;
	t1 %= 60;
	t2 %= 60;
	if(s > 0) ++ m;
	if(m > 0) ++ h;
	int pos = t1;
	while (1) {
  		if(pos == h) break;
		if(pos == m) break;
		if(pos == s) break;
		if (pos == t2) {
 	  		cout << "YES";
   			return ;
  		}
  		if (pos == 59)
   			pos = 0;
  		else
   			pos ++;
 	}
 	pos = t1;
 	while (1) {
 	    if (pos == t2) {
 	  		cout << "YES";
   			return ;
  		}
  		if(pos == h) break;
		if(pos == m) break;
		if(pos == s) break;
  		if (!pos)
   			pos = 59;
  		else
   			pos --;
 	}


	cout << "NO";	
}

int main () {
	SpeedForce;
//	freopen(".in", "r", stdin);
//	freopen(".out", "w", stdout);	
	// cin >> tests;
	while(tests --) {
		Solve ();
		// Ee Zadrot
	}	
}