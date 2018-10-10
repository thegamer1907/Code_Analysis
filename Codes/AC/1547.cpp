#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
#include<stack> 
#include<queue>
#include<cmath>
#include<map>
#include<bitset>
#include<set>
#define LL long long
#define N 100100
#define M 510
#define MOD 1000000007
#define FOR(i,l,r) for (int i = (l); i <= (r); i ++)
#define CLR(a,x) memset(a,x,sizeof(a))
#define INF 0x3f3f3f3f
#define ALL(x) x.begin(),x.end()
#define pb push_back
#define X first
#define Y second
using namespace std;
int a[N];
int s,n;
LL t[N];
LL ok(int k){
	for (int i = 1; i <= n; i ++) t[i] = (LL)a[i] + (LL)k * i;
	sort(t + 1,t + n + 1);
	LL sum = 0;
	for (int i = 1; i <= k; i ++) sum += t[i];
	return sum;
}
int main(){
	scanf("%d%d",&n,&s);
	FOR(i,1,n) scanf("%d",&a[i]);
	int l = 0,r = n,cnt;
	LL co;
	while (l <= r){
		int m = (l + r) / 2;
		LL sum = ok(m);
		if (sum <= s){
			cnt = m;
			co = sum;
			l = m + 1;
		}
		else r = m - 1;
	}
	printf("%d %I64d\n",cnt,co);
}