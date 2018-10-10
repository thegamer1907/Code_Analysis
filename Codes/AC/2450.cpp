#include <bits/stdc++.h>

using namespace std;

#define N 10000001

int last[N], n, vet[N], acc[N];

void build(){
	last[1] = 0;
	for(int i=2; i<N; i++){
		if(last[i] == 0){
			for(int j = i; j<N; j+=i) {
				last[j] = i;
				acc[i]+=vet[j];
			}
		}
	}
}

int main(){
	
	
	
	scanf("%d", &n);
	int a;
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		vet[a]++;
	}
	build();
	for(int i=1; i<N; i++) acc[i]+=acc[i-1];
	
	int m, l, r;
	scanf("%d", &m);
	while(m--){
		scanf("%d %d", &l, &r);
		if(l>=N) {
			printf("0\n"); continue;
		}
		r = min(r, N-1);
		printf("%d\n", acc[r]-acc[l-1]);
	}
}
