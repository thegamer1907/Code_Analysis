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

int n;
string s[maxn];

int main() {
	//FIN;
	cin >>n;
	for(int i = 1; i <= n; i++) {
		cin >>s[i];
	}
	for(int i = n - 1; i >= 1; i--) {
		int len1 = s[i+1].size(), len2 = s[i].size();
		int p = 0, flag = 0;
		for(int j = 0; j < min(len1, len2); j++) {
			if(s[i][j] == s[i+1][j]) {
				p++;
			} else if(s[i][j] < s[i+1][j]) {
				flag = 1;
				break;
			} else {
				s[i].erase(p, len2);
				break;
			}
		}
		if(!flag && len1 < len2) s[i].erase(p, len2);
	}
	for(int i = 1; i <= n; i++) {
		cout <<s[i] <<endl;
	}
	return 0;
}