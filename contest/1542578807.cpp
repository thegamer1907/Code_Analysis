#pragma comment(linker, "/stack:20000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,sse3,sse4,popcnt,abm,mmx")

#include <stdio.h>
#include <bits/stdc++.h>
#include <x86intrin.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T1, typename T2> using ordered_map = tree<T1, T2, std::less<T1>, rb_tree_tag, tree_order_statistics_node_update>;

using namespace std;


#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fs first
#define sc second
#define abs(a) ((a) < 0 ? -(a) : (a))
#define sqr(a) ((a) * (a))

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

inline pair<pair<bool, bool>, pair<string, bool> > useinout();

#ifdef SOL
double starttime;
#endif

void initialization() {
#ifdef SOL
	starttime = 1000. * clock() / CLOCKS_PER_SEC;
	if (useinout().fs.fs)
		freopen("input.txt", "r", stdin);
	if (useinout().fs.sc)
		freopen("output.txt", "w", stdout);
#else
	srand(__rdtsc());
	const string file = useinout().sc.fs;
	if (!file.empty()) {
		freopen((file + ".in").c_str(), "r", stdin);
		freopen((file + ".out").c_str(), "w", stdout);
	} else
	if(useinout().sc.sc) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}
#endif
}

int solution();

void finish(int exitval) {
	fflush(stdout);
#ifdef SOL
	fprintf(stderr, "\n-----------------\nexit value: %d\ntime: %.3lf ms\n-----------------\n", exitval, 1000. * clock() / CLOCKS_PER_SEC - starttime);
#endif
}

int main() {
	initialization();
	finish(solution());
	return (0);
}

const double eps = 1e-9;
const int mod = (int) 1e+9 + 7;
const double pi = acos(-1.);
const int maxn = 100100;

struct node {
	set<int> st[24];
	string pref, suff;
	ll len;
};
vector<node> vc;
char buff[255];

int solution() {

	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		node cur;
		cur.len = s.length();
		for(int j = 0; j < (int)s.length(); j++) {
			for(int k = 1; k < 24; k++) {
				if(j + k > (int)s.length()) continue;
				int dig = 0;
				for(int l = 0; l < k; l++) {
					if(s[j + l] == '1')
						dig |= (1 << l);
				}
				cur.st[k].insert(dig);
			}
		}
		cur.pref.clear();
		for(int i = 0; i < min(24, (int)s.length()); i++) {
			cur.pref += s[i];
		}
		cur.suff.clear();
		for(int i = max(int(s.length()) - 24, 0); i < (int)s.length(); i++) {
			cur.suff += s[i];
		}
		vc.pb(cur);
	}
	int m;
	scanf("%d", &m);
	for(; m--; ) {
		int a, b;
		scanf("%d%d", &a, &b);
		a--, b--;
		node cur;
		cur.len = min(vc[a].len + vc[b].len, 1000ll);
		string s = vc[a].suff + vc[b].pref;
		if(vc[a].len < 24) {
			cur.pref.clear();
			for(int i = 0; i < min(24, (int)s.length()); i++) {
				cur.pref += s[i];
			}
		} else {
			cur.pref = vc[a].pref;
		}
		if(vc[b].len < 24) {
			cur.suff.clear();
			for(int i = max(int(s.length()) - 24, 0); i < (int)s.length(); i++) {
				cur.suff += s[i];
			}
		} else {
			cur.suff = vc[b].suff;
		}
		for(int i = 1; i < 24; i++) {
			cur.st[i] = vc[a].st[i];
			for(int v : vc[b].st[i]) {
				cur.st[i].insert(v);
			}
		}

		for(int j = 0; j < (int)s.length(); j++) {
			for(int k = 1; k < 24; k++) {
				if(j + k > (int)s.length()) continue;
				int dig = 0;
				for(int l = 0; l < k; l++) {
					if(s[j + l] == '1')
						dig |= (1 << l);
				}
				cur.st[k].insert(dig);
			}
		}

		bool ok = 0;
		for(int j = 23; j > 0; j--) {
			if(cur.st[j].size() == (1 << j)) {
				ok = 1;
				printf("%d\n", j);
				break;
			}
		}
		if(!ok) printf("0\n");

		vc.pb(cur);

	}

	return (0);
}

inline pair<pair<bool, bool>, pair<string, bool> > useinout() {
	return (mp(mp(0, 0), mp("", 0)));
}

//by Andrey Kim
