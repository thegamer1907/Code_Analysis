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
string ss[105];
int main() {
	string s;
	int n;
	cin >> s;
	scanf("%d", &n);
	int cnt = 0, f1, f2;
	f1 = f2 = 0;
	for (int i = 0; i < n; ++i)cin >> ss[i];
	for (int i = 0; i < n; ++i) {
		if (ss[i][ss[i].size() - 1] == s[0] && f1 == 0) {
			cnt++;
			f1 = 1;
		}
		if (ss[i][0] == s[1] && f2 == 0) {
			cnt++;
			f2 = 1;
		}
	}
	if (cnt == 2)printf("YES\n");
	else
	{
		for (int i = 0; i < n; ++i) {
			if (ss[i] == s) {
				printf("YES\n");
				return 0;
			}
		}
		printf("NO\n");
	}
}