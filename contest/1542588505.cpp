#include <stdio.h>
#include <algorithm>
#include <queue>
#include <memory.h>
#include <string.h>
using namespace std;
char a[3], inp[105][3];
int dp[30][30];
int main() {
	scanf("%s", &a);
	int N; scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", inp[i]);
		dp[inp[i][0] - 'a'][inp[i][1] - 'a'] = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			dp[inp[i][1] - 'a'][inp[j][0] - 'a'] = 1;
		}
	}
	printf("%s\n", dp[a[0] - 'a'][a[1] - 'a'] ? "YES" : "NO");
}