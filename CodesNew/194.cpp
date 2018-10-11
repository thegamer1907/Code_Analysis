#include<bits/stdc++.h>

using namespace std;

int N, M, A[100005];

int main() {

	scanf("%d %d", &N, &M);
	
	for(int i=0;i<N;i++){
		scanf("%d", &A[i]);
	}
	
	int p1 = 0, p2 = 0, sum = 0, ans = 0;
	while(p2 < N){
		if (sum+A[p2] <= M) {
			sum += A[p2++];
		} else {
			if (ans < (p2 - p1)) ans = p2 - p1;
			sum -= A[p1++];
		}
	}
	if (ans < (p2 - p1)) ans = p2 - p1;
	printf("%d", ans);
	return 0;
}