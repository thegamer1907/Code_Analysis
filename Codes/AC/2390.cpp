#include <bits/stdc++.h>

using namespace std;

typedef long long int	lli;
const int N = (int) 1e7;
vector<int>primes;
int isPrime[N + 10];
int v[N];
lli cnt[N + 10], f[N + 10];
int n, m;

void sieve(){
	int i;
	
	for(i = 2 ; i * i <= N ; i++){
		if(!isPrime[i]){
			primes.push_back(i);
			
			for(int j = i + i ; j <= N ; j += i){
				isPrime[j] = 1;
			}
		}
	}
	
	for(; i <= N ; i++){
		if(!isPrime[i]){
			primes.push_back(i);
		}
	}
}

void preprocess(){
	for(int k = 0 ; k < primes.size() ; k++){
		int i = primes[k];
		
		for(int j = 1 ; j * i <= N ; j++){
			f[i] += (lli) cnt[j * i];
			
		}

	}
	
	for(int i = 1 ; i <= N ; i++){
		f[i] += f[i - 1];
	}
}

int main(){
	
	sieve();
	
	scanf("%d", &n);

	for(int i = 0 ; i < n ; i++){
		scanf("%d", &v[i]);
		
		cnt[v[i]]++;
	}

	scanf("%d", &m);
		
	preprocess();
	
	while(m--){
		int l, r;
		
		scanf("%d%d", &l,&r);

		if(l > N){
			printf("0\n");
			continue;
		}
		
		r = min(N, r);
		
		printf("%lld\n", f[r] - f[l - 1]);
	}
	
	return 0;
}
