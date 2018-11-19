#include <stdio.h>
#include <bits/stdc++.h>			

#define pb push_back
#define pf push_front
#define pp pop_back
#define sz(a) (int)(a.size())
#define mp make_pair
#define F first
#define S second
#define next _next
#define prev _prev
#define left _left
#define right _right
#define y1 _y1
#define all(x) x.begin(), x.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = (int)1e6 + 123;
const ll INF = (ll)1e18 + 123;
const int inf = (int)1e9 + 123;
const int MOD = (int)1e9 + 7;

void megaRandom() {
	unsigned int FOR;
 	asm("rdtsc" : "=A"(FOR));
  srand(FOR);
}

string s, t[111];
int n;

void yes() {
	puts("YES");
	exit(0);
}

void no() {
	puts("NO");
	exit(0);
}

bool check(string tmp) {
	for(int i = 0; i + 1 < sz(tmp); i ++) 
		if(tmp[i] == s[0] && tmp[i + 1] == s[1])
			return 1;
	return 0;
}

int main() {
	megaRandom();
	cin >> s >> n;
	for(int i = 1; i <= n; i++) {
		cin >> t[i];
	}	
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= n; j ++) {
			string tmp = t[i] + t[j];
			if(check(tmp)) 
				yes();
		}
	}
	no();
	return 0;         
}
