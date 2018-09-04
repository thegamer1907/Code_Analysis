#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long LL;
typedef pair<LL, LL> pLL;
typedef pair<LL, int> pli;
typedef pair<int, LL> pil;;
typedef pair<int, int> pii;
typedef unsigned long long uLL;

#define lson i<<1
#define rson i<<1|1
#define lowbit(x) x&(-x)
#define bug printf("*********\n");
#define debug(x) cout<<"["<<x<<"]" <<endl;
#define FIN freopen("D://code//in.txt", "r", stdin);
#define IO ios::sync_with_stdio(false),cin.tie(0);

const double eps = 1e-8;
const int mod = 1e9 + 7;
const int maxn = 5e5 + 7;
const double pi = acos(-1);
const int inf = 0x3f3f3f3f;
const LL INF = 0x3f3f3f3f3f3f3f3f;

int n, m,  q, l, r;
int mp[maxn];

int main() {
	//FIN;
	ios::sync_with_stdio(false);
	cin >>n >>m;
	int num[n+5][m+5];
	for(int i = 1; i <= n; i++) {
		mp[i] = i;
		for(int j = 1; j <= m; j++) {
			cin >>num[i][j];
		}
	}
	for(int i = 1; i <= m; i++) {
		int las = 1;
		for(int j = 2; j <= n; j++) {
			if(num[j][i] >= num[j-1][i]) {
				if(mp[j] > las) mp[j] = las;
			} else {
				las = j;
			}
		}
	}
	cin >>q;
	while(q--) {
		cin >>l >>r;
		if(mp[r] <= l) cout <<"Yes" <<endl;
		else cout <<"No" <<endl;
	}
	return 0;
}