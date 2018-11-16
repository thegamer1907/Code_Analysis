#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
#define ll long long
const int maxm = 100005;
int c[maxm];
ll dp[maxm][2];
string str[maxm];
int main()
{
	int n, i, j, k, sum;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
		scanf("%d", &c[i]);
	dp[1][0] = 0, dp[1][1] = c[1];
	for (i = 1;i <= n;i++)
	{
		cin >> str[i];
		if (i == 1) continue;
		dp[i][0] = dp[i][1] = 1e17;
		if (str[i] >= str[i - 1])
			dp[i][0] = dp[i - 1][0];
		reverse(str[i].begin(), str[i].end());
		if (str[i] >= str[i - 1])
			dp[i][1] = dp[i - 1][0] + c[i];
		reverse(str[i - 1].begin(), str[i - 1].end());
		if (str[i] >= str[i - 1])
			dp[i][1] = min(dp[i][1], dp[i - 1][1] + c[i]);
		reverse(str[i].begin(), str[i].end());
		//cout << str[i] << endl << str[i - 1] << endl;
		if (str[i] >= str[i - 1])
			dp[i][0] = min(dp[i][0], dp[i - 1][1]);
		reverse(str[i - 1].begin(), str[i - 1].end());
		if (dp[i][0] == 1e17 && dp[i][1] == 1e17)
		{
			printf("-1\n");
			return 0;
		}
	}
	printf("%lld\n", min(dp[n][0], dp[n][1]));
	return 0;
}