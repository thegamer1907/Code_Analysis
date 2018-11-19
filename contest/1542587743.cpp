#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define lson l,mid,id<<1
#define rson mid+1,r,id<<1|1
typedef pair<int, int>pii;
const int INF = 0x3f3f3f3f;
const int MAXN = 3010;
const int MAXM = 100005;
const ll MOD = 998244353;
const int maxn = 205 + 100;
const double eps = 1e-8;
const double PI = acos(-1.0);

int main() {
	double a[3], t1, t2;
	cin >> a[0] >> a[1] >> a[2] >> t1 >> t2;
	if (a[1] != 0 || a[2] != 0)a[0] = a[0] * 5 + 0.1;
	else a[0] = a[0] * 5;
	if (a[2] != 0)a[1] = a[1] + 0.1;
	sort(a, a + 3);
	double L[5], R[5];
	L[1] = a[0]; R[1] = a[1];
	L[2] = a[1]; R[2] = a[2];
	L[3] = 0; R[3] = a[0];
	L[4] = a[2]; R[4] = 60;
	t1 = t1 * 5, t2 = t2 * 5;
	int bel1, bel2;
	for (int i = 1; i <= 4; ++i) {
		//cout << L[i] << " " << R[i] << endl;
		if (t1 > L[i] && t1 < R[i])bel1 = i;
		if (t2 > L[i] && t2 < R[i])bel2 = i;
	}
	if (bel1 == bel2 || (bel1 >=3 && bel2 >=3))printf("YES\n");
	else printf("NO\n");
}