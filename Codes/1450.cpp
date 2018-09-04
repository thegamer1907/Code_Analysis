#include "bits/stdc++.h"
using namespace std;

const int N = 1e5+5;
int n, A[N];

long long f(int k){
	long long res = 0;
	priority_queue< long long > pq;
	int sz = 0;
	for(int i = 0; i < n and k; ++i){
		long long a = A[i] + (long long) (i + 1) * k;
		if(sz < k){
			res += a;
			pq.push(a);
			sz++;
		}
		else if(a < pq.top()){
			res -= pq.top();
			pq.pop();
			res += a;
			pq.push(a);
		}
	}
	return res;
}

int main(){
	int S;
	scanf("%d %d", &n, &S);
	for(int i = 0; i < n; ++i)
		scanf("%d", A + i);

	int k = 0;
	for(int b = n; b >= 1; b /= 2){
		while(k + b <= n and f(k + b) <= S) k += b;
	}
	printf("%d %I64d\n", k, f(k));
}