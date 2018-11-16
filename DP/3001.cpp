#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <cmath>
#include <locale>
using namespace std;
#define F first
#define S second
#define pb push_back
#define MP make_pair
#define MS0(I) memset(I, 0, sizeof(I));
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
#define rep(i, n) for(int i = 0; i < n; i ++)
#define rep1(i, a, b) for(int i = a; i < b; i ++)
#define per1(i, a, b) for(int i = a; i >= b; i --)
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)
typedef long long LL;
typedef long double LDB;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
//////////////////////
const long double eps = 1e-13;
const long double PI = acos(-1);
const int INF = (int)1e9;
const LL  INFF = (LL)1e18;
const int mod = (int)1e9 + 7;
const int MXN = (int)1e6 + 7;
char s1[MXN], s2[MXN];
int main(void){
	int n; scanf("%d", &n);
	scanf("%s %s", s1 + 1, s2 + 1);
	int ans = 0;
	rep1(i, 1, n+1){
		if(s1[i] == s2[i]) continue;
		if(i != n && s1[i] != s2[i] && s1[i+1] != s2[i+1] && s1[i] != s1[i+1]){
			ans ++;
			swap(s1[i], s1[i+1]);
		}
		if(s1[i] != s2[i]){
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
