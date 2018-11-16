#include <queue>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#define p(n) printf("%d\n",n)
#define s(n) scanf("%d",&n)
#define fo(x,y) for(int x=0;x<y;x++)
#define pb push_back
#define disp(x) cout<<#x<<" = "<<x<<endl;
using namespace std;
const double EPS = (1e-7);
const int sz = 1e5 + 4;
const int mod = 1e9 + 7;
typedef long long ll;
int dcmp(double x, double y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1 : 1; }
vector<int> v;
const int siz = 1e5 + 100;
int n, b, arr[105], dp[105][105][105];
int getval(int v) {
	return v % 2 ? -1 : 1;
}
int solve(int i, int j, int k) {
	if (i == n) {
		return 0;
	}
	if (dp[i][j][k] != -1) {
		return dp[i][j][k];
	}
	int v1 = 0, v2 = 0;
	if (i != 0 && j == 50 && abs(arr[i] - arr[i - 1]) + k <= b) {
		v1 = 1+solve(i + 1, 50 + getval(arr[i]), abs(arr[i] - arr[i - 1]) + k);
	}
	v2 = solve(i + 1, j + getval(arr[i]), k);
	return dp[i][j][k] = max(v1, v2);
}
int main()
{
	scanf("%d%d", &n, &b);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	memset(dp, -1, sizeof dp);
	printf("%d\n", solve(0, 50, 0));
	return 0;
}