#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;

int n, S;
ll a[100005] = { 0 };
ll s[100005] = { 0 };

ll c(int k, ll a[]){
	ll c[100005] = { 0 };
	for (int i = 1; i <= n; i++){
		c[i] = a[i] + s[i] * k;
	}
	sort(c + 1, c + 1 + n);
	for (int i = 1; i <= k; i++) c[i] += c[i - 1];
	if (c[k] <= S) return c[k];
	return 0;
}
int main(){
	scanf("%d %d", &n, &S);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		s[i] = i;
	}

	int l = 1, r = n;
	int ans = 0;
	while (r - l >= 0){
		int m = (r + l) / 2;
		if (c(m, a)) l = m + 1, ans = m;
		else r = m - 1;
	}
	printf("%d %d\n", ans, c(ans, a));
	//system("pause");
}