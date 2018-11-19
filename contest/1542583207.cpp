#include <bits/stdc++.h>
#define ll long long
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
using namespace std;
int a[100005][5],num[100005];
bool vis[5];
bool vist[16];
inline int read()
{int x=0;
char c=getchar();
while (c<'0'||c>'9') c=getchar();
while (c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
return x;
}
int main (){
	int i,j,k,n;
	n=read();k=read();
	for (i=1;i<=n;i++)
	{for (j=1;j<=k;j++)
	{a[i][j]=read();num[i]+=a[i][j];
	if (!a[i][j]) {vis[j]=1;}
	}
	if (num[i]==0) {puts("YES");return 0;}
	}
	for (i=1;i<=k;i++)
	{if (!vis[i]) 
	{puts("NO");
	return 0;
	}
	}
	for (i=1;i<=n;i++)
	{if (num[i]==1)
	{puts("YES");return 0;}
	}
	if (k<=3) {puts("NO");return 0;}
	for (i=1;i<=n;i++)
	{int sta=0;
	for (j=1;j<=k;j++)
	{sta+=a[i][j]*(1<<(j-1));}
	vist[sta]=1;
	if (num[i]==2&&vist[(sta^15)])
	{puts("YES");return 0;}
	}
	puts("NO");
	return 0;
}
	
	
	
	
	
	
	
	