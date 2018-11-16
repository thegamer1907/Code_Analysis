#include<bits/stdc++.h>
using namespace std;

int N, A[105], sum, ans, val;

int main () {
	cin >> N;
	
	val = -1;
	for (int i=0; i<N; i++) {
		cin >> A[i];
		sum+=A[i];
		
		ans = 0;
		for (int j=i; j>=0; j--) {
			if (A[j] == 1) ans--;
			else ans++;
			val = max(val, ans);
		}
	}
	cout << sum + val << '\n';
}
