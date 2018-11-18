#include <bits/stdc++.h>
using namespace std;
#define N 200010
#define inf 1000000000
#define ep 1e-9
#define mp make_pair
#define pb push_back
#define ll long long
template<class T> void chkmax(T &a, T b) {if (a < b) a = b;}
template<class T> void chkmin(T &a, T b) {if (a > b) a = b;}
typedef pair<int, int> pii;

int h, m, s, t1, t2;

bool chk(int n) {
	if (t1 <= n && n < t2) return true;
	return false;
}


int main() {
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	m /= 5;
	s /= 5;
	bool a = 0, b = 0;
	if (t1 > t2) swap(t1, t2);
	if (chk(h)) a = 1;
	else b = 1;
	if (chk(m)) a = 1;
	else b = 1;
	if (chk(s)) a = 1;
	else b = 1;
	if (a && b) puts("NO");
	else puts("YES");
	return 0;
}
