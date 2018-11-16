#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main(void)
{
/*	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n, i, j, q, l; 	
	scanf("%d %d", &n, &q);
	int a[n];
	int dp[n];
	map<int, int>m;
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=n-1; i>=0; i--)
	{
		m[a[i]]++;
		dp[i]=m.size();
	}
	while(q--)
	{
		scanf("%d", &l);
		printf("%d\n", dp[l-1]);
	}

	return 0;
}