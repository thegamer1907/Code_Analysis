#include<bits/stdc++.h>
#define FO(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
const int N = 200005;
int read() {
	char c = getchar();
	while(c != '0' && c != '1') c = getchar();
	return c - '0';
}
struct Bitset {
	int a[5];
	bool operator == (const Bitset &tmp) const{
		if(a[0] == tmp.a[0] && a[1] == tmp.a[1] && a[2] == tmp.a[2] && a[3] == tmp.a[3]) 
			return 1;
		return 0;
	}
}s[N], nw[50], stdd[20];
bool cmp(Bitset x, Bitset y) {
	if(x.a[0] < y.a[0]) return 1;
	if(x.a[1] < y.a[1]) return 1;
	if(x.a[2] < y.a[2]) return 1;
	if(x.a[3] < y.a[3]) return 1;
	return 0;
}
bool pdd(Bitset x, Bitset y) {
	if(x.a[0] && y.a[0]) return 0;
	if(x.a[1] && y.a[1]) return 0;
	if(x.a[2] && y.a[2]) return 0;
	if(x.a[3] && y.a[3]) return 0;
	return 1;
}
int cnt;
void dfs(int now, int lim, Bitset tmpp) {
	if(now == lim + 1) {
		stdd[++cnt] = tmpp;
		return ;
	}
	tmpp.a[now - 1]	= 0;
	dfs(now + 1, lim, tmpp);
	tmpp.a[now - 1] = 1;
	dfs(now + 1, lim, tmpp);
}
int n, k;
int pd[N], tot[N];
Bitset lala;
int main() {
//	freopen("data.in", "r", stdin);
	cin >> n >> k;
	dfs(1, k, lala);
	int lim = 1;
	for(int i = 1; i <= k; lim *= 2, i++);
	FO(i, 1, n) {
		FO(j, 0, k - 1)
			s[i].a[j] = read();
		FO(j, 1, lim)
			if(stdd[j] == s[i]) {
				tot[j] ++;break;}
	}
	if(n == 1) {
		FO(i, 1, k)
			if(s[1].a[i - 1]) {
				cout << "NO";
				return 0;
			}
		cout << "YES";
		return 0;
	}
//	sort(s + 1, s + n + 1, cmp);
//	s[n + 1].a[0] = -1;
	int t = 0;
//	for(int i = 1; i <= n; i++) {
//		if(t == 0) {
//			if(s[i] == s[i + 1])
//				pd[i] = 2;
//			else pd[i] = 1;
//		  t = 1;
//		}
//		if(!(s[i] == s[i + 1]))
//			t = 0;
//	}
//	t = 0;
//	for(int i = 1; i <= n; i++) {
//		if(pd[i] == 1) {
//			nw[++t] = s[i];
//		}
//		else if(pd[i] == 2) {
//			nw[++t] = s[i];
//			nw[++t] = s[i];
//		}
//	}
//	if(n == 100000 && k == 3) {
//		if(!s[1].a[0] && s[1].a[1] && s[1].a[2] )
//			cout << " t = " << t << endl;
//	}
	FO(i, 1, lim) {
		if(tot[i] == 1) {
			nw[++t] = stdd[i];
		}
		else if(tot[i] > 1) {
			nw[++t] = stdd[i];
			nw[++t] = stdd[i];
		}
	}
	for(int i = 1; i <= t; i++) {
		for(int j = i + 1; j <= t; j++) {
			if(pdd(nw[i], nw[j])) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}