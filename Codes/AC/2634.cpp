#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 5;
int n, freq[N], temp, sz, lstpr[N], m, l, r;
long long int cs[N];
bitset<N> pr;

void seive(){
	for (int i = 3; i*i<N; i+=2){
		if (!pr[i]){
			for (int j = i + i; j<N; j+=i){
				pr[j] = 1;
			}
		}
	}
}

int main() {
	scanf("%d", &n);
	lstpr[sz++] = 2;
	seive();
	while (n--){
		scanf("%d", &temp);
		freq[temp]++;
	}
	for (int i = 3; i<N;i+=2){
		if (!pr[i]){
			lstpr[sz++] = i;
		}
	}
	for (int i = 0; i<sz; i++){
		int temp = lstpr[i];
		while(temp<N){
			cs[lstpr[i]]+=freq[temp];
			temp += lstpr[i];
		}
	}
	for (int i = 1; i<N;i++){
		cs[i] = cs[i] + cs[i-1];
	}
	scanf("%d", &m);
	while (m--){
		scanf("%d%d", &l, &r);
		l = min(l, 10000000);
		r = min(r, 10000000);
		printf("%lld\n", cs[r] - cs[l-1]);
	}
	return 0;
}
