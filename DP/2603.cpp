#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn = 1e5 + 7;
int a[maxn], dp[maxn];

int main() {
	int n;
	scanf("%d", &n);
	dp[0] = 0;
	for(int i=1;i<=n;++i) {
		scanf("%d",&a[i]);
		if(a[i] > a[i-1]) dp[i] = dp[i-1] + 1;
		else dp[i] = 1;
	}
	printf("%d\n", *max_element(dp+1, dp+1+n));
	return 0;
}