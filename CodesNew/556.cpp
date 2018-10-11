#include<cstdio>
#include<cmath>
#define MAX 10000000
bool prime[MAX+1] = { false };
int count[MAX+1] = { 0 };
int F[MAX + 1] = { 0 };
void makePrime(){
	int limit = sqrt((double)MAX);
	for (int i = 0; i <= MAX; i++)
		prime[i] = true;
	prime[0] = prime[1] = false;
	for (int i = 2; i <= limit; i++){
		if (prime[i]){
			for (int k = MAX / i, j = i*k; k >= i; k--, j -= i){
				if (prime[k])
					prime[j] = false;
			}
		}
	}
}
void compute(){
	for (int i = 2; i <= MAX; i++){
		if (prime[i]){
			for (int j = i; j <= MAX; j += i)
				F[i] += count[j];
		}
	}
	for (int i = 1; i <= MAX; i++)
		F[i] += F[i - 1];
}
int main(){
	makePrime();
	int n, m;
	while (scanf("%d", &n) == 1){
		for (int i = 0; i < n; i++){
			int tmp;
			scanf("%d", &tmp);
			count[tmp]++;
		}
		compute();
		scanf("%d", &m);
		for (int i = 0; i < m; i++){
			int L, R;
			scanf("%d%d", &L, &R);
			if (R>MAX)
				R = MAX;
			if (L > MAX)
				printf("%d\n", 0);
			else
				printf("%d\n", F[R] - F[L - 1]);
		}
	}
	return 0;
}