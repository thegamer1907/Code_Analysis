/*
* @Author: mjt
* @Date:   2018-10-15 11:28:17
* @Last Modified by:   mjt
* @Last Modified time: 2018-10-15 13:55:30
*/
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iostream>
#include<cctype>
#include<set>
#include<vector>
#include<queue>
#include<map>
#define fi(s) freopen(s,"r",stdin);
#define fo(s) freopen(s,"w",stdout);
using namespace std;
typedef long long LL;

inline int read() {
    int x=0,f=1;char ch=getchar();for(;!isdigit(ch);ch=getchar())if(ch=='-')f=-1;
    for(;isdigit(ch);ch=getchar())x=x*10+ch-'0';return x*f;
}

const int N = 100005;

int a[N], cnt[N], b[N];
// LL _f[N], _g[N], *f = _f, *g = _g;
LL f[N], g[N];

void solve(int Head,int Tail,int L,int R,LL w) {
	if (Head > Tail) return ;
	int mid  = (Head + Tail) >> 1, p = min(R, mid), k = 0;
	for (int i=Head; i<=mid; ++i) w += cnt[a[i]], cnt[a[i]] ++;
	for (int i=L; i<=p; ++i) {
		cnt[a[i]] --; w -= cnt[a[i]];
		if (f[mid] > g[i] + w) f[mid] = g[i] + w, k = i;
	}

	for (int i=Head; i<=mid; ++i) cnt[a[i]] --, w -= cnt[a[i]];
	for (int i=L; i<=p; ++i) w += cnt[a[i]], cnt[a[i]] ++;
	solve(Head, mid - 1, L, k, w);
	
	for (int i=L; i<k; ++i) cnt[a[i]] --, w -= cnt[a[i]];
	for (int i=Head; i<=mid; ++i) w += cnt[a[i]], cnt[a[i]] ++;

	solve(mid + 1, Tail, k, R, w);
	
	for (int i=Head; i<=mid; ++i) --cnt[a[i]];
	for (int i=L; i<k; ++i) ++cnt[a[i]];
}
int main() {
	int n = read(), k = read();
	for (int i=1; i<=n; ++i) {
		a[i] = read();
		f[i] = f[i - 1] + cnt[a[i]];
		cnt[a[i]] ++;
	}
	memset(cnt, 0, sizeof(cnt));
	while (-- k) {
		swap(f, g);
		memset(f, 0x3f, sizeof(f));
		solve(1, n, 1, n, 0);
	}
	cout << f[n];
	return 0;
}