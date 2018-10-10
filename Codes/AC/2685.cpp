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
int bk[1000005];
void buildKMP (str &S) {
	int s = S.length();
	SET(bk, -1);
	int j = -1;
	FOR(i, 1, s - 1, 1) {
		while (j != -1 && S[i] != S[j + 1]) j = bk[j];
		if (S[i] == S[j + 1]) bk[i] = ++j;
		else bk[i] = j;
	}
}
int freq[1000005];
int main () {
	ios::sync_with_stdio(false); cin.tie(0);
	str S;
	cin >> S;
	int s = S.length();
	buildKMP(S);
	SET(freq, 0);
	FOR(i, 1, s - 1, 1) {
		if (bk[i] >= 0) freq[bk[i]]++;
	}
	int id = s - 1, maxlen = 0;
	while (true) {
		id = bk[id];
		if (id < 0) break;
		if (freq[id] >= 2) {
			maxlen = max(maxlen, id + 1);
		} 
	}
	if (bk[s - 1] != -1 && bk[bk[s - 1]] != -1) {
		maxlen = max(maxlen, bk[bk[s - 1]] + 1);
	}
	if (maxlen == 0) printf("Just a legend\n");
	else printf("%s\n", S.substr(0, maxlen).c_str());
	return 0;
}