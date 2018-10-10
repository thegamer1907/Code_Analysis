#include <bits/stdc++.h>
using namespace std;

const int N = 1e7;
int cnt[N + 11], n, sum[N + 11], q;
bool isprime[N + 11];

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int x;
		scanf("%d", &x);
		cnt[x]++;
	}
	for(int i = 2; i <= N; i++)
		if(isprime[i] == 0)
			for(int j = i + i; j <= N; j += i)
				isprime[j] = 1;
	for(int i = 1; i <= N; i++){
		sum[i] = sum[i - 1];
		if(isprime[i] == 0){
			for(int j = i; j <= N; j += i)
				sum[i] += cnt[j];
		}
	}
	scanf("%d", &q);
	for(int i = 0; i < q; i++){
		int l, r;
		scanf("%d%d", &l, &r);
		r = min(r, (int)1e7);
		l = min(l, (int)1e7 + 1);
		printf("%d\n", sum[r] - sum[l - 1]);
	}
	return 0;
}