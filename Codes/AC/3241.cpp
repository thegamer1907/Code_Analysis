#include <bits/stdc++.h>
using namespace std;

int N;
int A[100001];
int best = 0;
int main() {
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> A[i];
		if(A[i]%N <= i) {
			A[i] += (i-A[i]%N);
		}
		else {
			A[i] += (N+i-A[i]%N);
		}
	}
	for(int i=1; i<N; i++) {
		if(A[best] > A[i]) {
			best = i;
		}
	}
	
	cout << best+1 << endl;
}