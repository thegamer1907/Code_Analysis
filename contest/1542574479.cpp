#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define sd(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pd(n) printf("%d",n)
#define pl(n) printf("%lld",n)
#define sf(n) scanf("%f",&n)
#define pf(n) printf("%.12f",n)
#define psp printf(" ")
#define endc printf("\n")

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn = 207;
const int lm = 12;
const int lms = 1<<lm;

typedef struct data {
	string pref, suf;
	bitset<lms> f[lm];
} data;

data a[maxn];
bitset<lms> rf[lm];

bitset<lms> calc(string s, int p) {
	bitset<lms> ok;
	for (int i = 0; i + p - 1 < s.size(); i++) {
		int k = strtol(s.substr(i,p).c_str(), NULL, 2);
		ok.set(k);
	}
	return ok;
}
				

int main() {

	for (int j = 1; j < lm; j++) {
		for (int k = 0; k < (1<<j); k++) {
			rf[j].set(k);
		}
	}

	int n; sd(n);
	for (int i = 1; i <= n; i++) {
		string s; cin>>s; 
		if (s.size() < lm) { a[i].pref = a[i].suf = s; }
		else { a[i].pref = s.substr(0, lm); a[i].suf = s.substr(s.size()-lm, lm); }
		for (int j = 1; j < lm; j++) {
			a[i].f[j] = calc(s, j);
		}
	}
	
	int q; sd(q);

	while (q--) {
		n++; int x,y; sd(x); sd(y);
		string as = a[x].pref + a[y].pref, bs = a[x].suf + a[y].suf;

		a[n].pref = (as.size() >= lm) ? as.substr(0, lm) : as;
		a[n].suf  = (bs.size() >= lm) ? bs.substr(bs.size() - lm, lm) : bs;

		int ans = 0;

		for (int j = 1; j < lm; j++) {
			a[n].f[j] = a[x].f[j] | a[y].f[j] | calc(a[x].suf + a[y].pref, j);
			if (a[n].f[j] == rf[j]) ans = j;
		}
		pd(ans); endc;
	}
}
