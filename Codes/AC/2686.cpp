#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define str string
#define fi first
#define se second
#define pb push_back
#define SET(a, b) memset(a, b, sizeof(a))
#define eps 1e-6
#define pi atan(1) * 4
#define mod 1000000007
#define inf 1000000000
#define llinf 1000000000000000000
#define FOR(i, a, b, c) for (int i = (a); i <= (b); i += (c))
#define FORD(i, a, b, c) for (int i = (a); i >= (b); i -= (c))
#define FORl(i, a, b, c) for (ll i = (a); i <= (b); i += (c))
#define FORDl(i, a, b, c) for (ll i = (a); i >= (b); i -= (c))
using namespace std;
int ch[2000005][26], fail[2000005], len[2000005];
int mn[2000005], smn[2000005], mx[2000005];
int rt = 1, last = 1, tot = 1;
void upd (int x, int id) {
	int p = last;
	int np = ++tot; last = np;
	len[np] = len[p] + 1;
	mn[np] = mx[np] = id;
	while (p && !ch[p][x]) {
		ch[p][x] = np;
		p = fail[p];
	}
	if (!p) {
		fail[np] = rt;
	} else {
		int q = ch[p][x];
		if (len[q] == len[p] + 1) {
			fail[np] = q;
		} else {
			int nq = ++tot;
			memcpy(ch[nq], ch[q], sizeof(ch[q]));
			len[nq] = len[p] + 1;
			
			fail[nq] = fail[q];
			fail[q] = fail[np] = nq;
			while (p && ch[p][x] == q) {
				ch[p][x] = nq;
				p = fail[p];
			}
		}
	}
}
void insert (str &T) {
	int t = T.length();
	FOR(i, 1, t, 1) {
		upd(T[i - 1] - 'a', i);
	}
}
int freq[1000005], tpsort[2000005];
int main () {
	ios::sync_with_stdio(false); cin.tie(0);
	// Construct Suffix Automaton
	SET(ch, 0); SET(fail, 0); SET(len, 0); SET(mx, 0);
	FOR(i, 0, 2000005, 1) mn[i] = smn[i] = inf;
	str S;
	cin >> S;
	int s = S.length();
	insert(S);
	// Counting sort
	SET(freq, 0);
	FOR(i, 1, tot, 1) freq[len[i]]++;
	FOR(i, 1, s, 1) freq[i] += freq[i - 1];
	FORD(i, tot, 1, 1) tpsort[freq[len[i]]--] = i;
	// Get the results
	FORD(i, tot, 1, 1) {
		int u = tpsort[i];
		if (mn[u] < mn[fail[u]]) {
			smn[fail[u]] = mn[fail[u]];
			mn[fail[u]] = mn[u];
		} else if (mn[u] > mn[fail[u]] && mn[u] < smn[fail[u]]) {
			smn[fail[u]] = mn[u];
		}
		mx[fail[u]] = max(mx[fail[u]], mx[u]);
	}
	int maxlen = 0, id = -1;
	FOR(i, 2, tot, 1) {
		if (mn[i] == len[i] && smn[i] != inf && smn[i] != s && mx[i] == s) {
			if (len[i] > maxlen) {
				maxlen = len[i]; id = i;
			}
		}
	}
	if (id == -1) {
		printf("Just a legend\n");
	} else {
		printf("%s\n", S.substr(0, maxlen).c_str());
	}
	return 0;
}