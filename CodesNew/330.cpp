#include <bits/stdc++.h>

using namespace std;
const int MAX = 100005;
int A[MAX];

int main(){
	int n, t;
	scanf("%d %d", &n, &t);
	for (int i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}
	int mx = 0;
	int cnt = 0;
	int sum = 0;
	int i = 0, j = 0;
	while ((j < n) && (i < n)) {
		if (sum + A[i] <= t) {
			sum += A[i];
			i++;
			cnt++;
			mx = max(mx, cnt);
		}
		if (sum + A[i] > t) {
			if (sum > 0) {
				sum -= A[j];
				j++;
				cnt--;
			} else {
				i++;
				j++;
			}
			mx = max(mx, cnt);
		}
		mx = max(mx, cnt);
	}
	printf("%d\n", mx);
	return 0;
}