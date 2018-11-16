#include <bits/stdc++.h>
using namespace std;

int main() {
	char a[100005];
	int n, i, j, q, l, r;
	scanf("%s", a);
	n=strlen(a);
	int dp[n];
	dp[0]=0;
	for(i=1; i<n; i++)
	{
		if(a[i]==a[i-1])
		{
			dp[i]=dp[i-1]+1;
		}
		else
		{
			dp[i]=dp[i-1];
		}
	}
	scanf("%d", &q);
	while(q--)
	{
		scanf("%d %d", &l, &r);
		printf("%d\n", dp[r-1]-dp[l-1]);
	}
	return 0;
}