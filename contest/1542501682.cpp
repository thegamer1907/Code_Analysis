#include <bits/stdc++.h>

using namespace std; 
const int MAX_N = 100005; 
const int MAX_K = 23; 
const long long inf = 1e14; 

struct node {
	int l, r, xmin, xmax;	
};

long long dp[MAX_N][MAX_K];
int n, k;
int a[MAX_N]; 
int cnt[MAX_N];

int main () {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	scanf("%d %d", &n, &k); 
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]); 
	}

	dp[0][0] = 0; 
	for (int i = 1; i <= n; i++) {
		dp[i][0] = inf; 
	}

	long long cost = 0; 
	int L = 1;
	int R = 0; 

	for (int j = 1; j <= k; j++) {
		queue <node> myqueue; 
		myqueue.push((node) {1, n, 1, n});
		while (!myqueue.empty()) {
			node tmp = myqueue.front(); 
			myqueue.pop(); 

			int l = tmp.l; 
			int r = tmp.r; 
			int xmin = tmp.xmin; 
			int xmax = tmp.xmax; 

			int best = -1; 
			int mid = (l + r) >> 1;
			dp[mid][j] = inf;  

			for (int i = xmin; i <= min(mid, xmax); i++) {
				int curL = i; 
				int curR = mid;

				while (L > curL) {
					L--; 
					cost += cnt[a[L]];
					cnt[a[L]]++; 
				}

				while (L < curL) {
					cnt[a[L]]--;
					cost -= cnt[a[L]];
					L++; 	
				}

				while (R < curR) {
					R++; 
					cost += cnt[a[R]]; 
					cnt[a[R]]++; 
				}

				while (R > curR) {
					cnt[a[R]]--; 
					cost -= cnt[a[R]]; 
					R--; 
				}
    		
    		if (dp[mid][j] > dp[i - 1][j - 1] + cost) {
					dp[mid][j] = dp[i - 1][j - 1] + cost; 
					best = i;
				}
			}
			
			if (l < r) {
				myqueue.push((node) {l, mid, xmin, best}); 
				myqueue.push((node) {mid + 1, r, best, xmax});
	  	}
		}
	}

	printf("%I64d", dp[n][k]);
	return 0; 
}
