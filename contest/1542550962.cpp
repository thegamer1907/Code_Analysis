#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
#define LL long long
const int maxn=1e5+100;
const LL INF=0x3f3f3f3f3f3f3f3f;
LL dp[maxn][2],a[maxn],t[maxn];

void DFS(int l,int r,int L,int R,int u,LL sum)
{
	if (l > r) return;  
    int m = (l + r) / 2, M = -1, i;  
    LL mc = INF;  
    int p = min(m, R);  
    for (i = l; i <= m; i++) sum += t[a[i]]++;  
    for (i = L; i <= p; i++) 
	{  
        sum -= --t[a[i]];  
        if (sum + dp[i][u ^ 1] < dp[m][u]) 
		{  
            M = i; 
			dp[m][u] = sum + dp[i][u ^ 1];  
        }  
    }  
    for (i = l; i <= m; i++) sum -= --t[a[i]];  
    for (i = L; i <= p; i++) sum += t[a[i]]++;  
    DFS(l, m - 1, L, M, u, sum);  
    for (i = L; i < M; i++) sum -= --t[a[i]];  
    for (i = l; i <= m; i++) sum += t[a[i]]++;  
    DFS(m + 1, r, M, R, u, sum);  
    for (i = L; i < M; i++) t[a[i]]++;  
    for (i = l; i <= m; i++) t[a[i]]--; 
}
int main()
{
	int n,k;
	cin>>n>>k;
	memset(dp,0,sizeof(dp));
	memset(t,0,sizeof(t));
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		dp[i][0]=dp[i-1][0]+t[a[i]]++;
	}
	for(int i=1;i<k;i++)
	{
		memset(t,0,sizeof(t));
		for(int j=1;j<=n;j++)
			dp[j][i%2]=INF;
		DFS(1,n,1,n,i%2,0);	
	}
	printf("%lld\n",dp[n][(k+1)%2]);
	return 0;
}
