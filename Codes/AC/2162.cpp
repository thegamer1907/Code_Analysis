#include <cstdio>

typedef long long llint;

llint arr[200001], arrRev[200001];

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		arrRev[n + 1 - i] = arr[i];
	}

	for(int i = 1; i <= n; i++) {
		arr[i] += arr[i - 1];
		arrRev[i] += arrRev[i - 1];
	}

	int p = 1, pR = 1;
	llint ans = 0;
	int nHalf = n / 2;

	while(p + pR <= n) {
		if(arr[p] > arrRev[pR]) {
			pR++;	
		}
		else if(arr[p] == arrRev[pR]) {
			ans = arr[p];
			p++;
			pR++;
		}
		else { // arr[p] < arrRev[pR]
			p++;
		}
	}

	printf("%I64d\n", ans);
	return 0;
}
