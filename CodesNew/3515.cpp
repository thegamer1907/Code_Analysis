#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <stack>
#define LL long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repn(i,b) for(int i=1;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
#define pern(i,a) for(int i=a;i>0;i--)
#define all(x) (x).begin(),(x).end()
#define endl "\n"
const int INF = 0x3f3f3f3f;
const LL  INF_LL = (LL)1e18;
const int maxn = 1e5+10;
using namespace std;

int n, m, A[105];

int main() {
	//freopen("TestData.txt", "r", stdin);
	while (scanf("%d%d",&n,&m) == 2) {
		int MAX = 0, MIN = 0, tot = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d",&A[i]);
			MAX = max(MAX,A[i]);
		}
		for (int i = 0; i < n; i++) {
			tot += MAX - A[i];
		}
		MIN = MAX;
		if (tot < m) MIN += (m-tot+n-1)/n;
		printf("%d %d\n",MIN,MAX+m);
	}
	return 0;
}

