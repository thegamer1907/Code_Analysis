#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define RG register

inline int gi()
{
	RG int ret; RG bool flag; RG char ch;
	ret=0, flag=true, ch=getchar();
	while (ch < '0' || ch > '9')
		ch == '-' ? flag=false : 0, ch=getchar();
	while (ch >= '0' && ch <= '9')
		ret=(ret<<3)+(ret<<1)+ch-'0', ch=getchar();
	return flag ? ret : -ret;
}

const db pi = acos(-1.0);
const int N = 142857, inf = 1<<30;

bool vis[20];

int main()
{
	int n,k,a,i,j,tt;
	n=gi(), k=gi();
	for (i=1; i<=n; ++i)
		{
			tt=0;
			for (j=1; j<=k; ++j)
				a=gi(), tt|=a<<(j-1);
			vis[tt]=true;
		}
	for (i=0; i<=16; ++i)
		{
			if (!vis[i])
				continue;
			for (j=0; j<=16; ++j)
				if (vis[i] && vis[j] && (i&j) == 0)
					puts("YES"), exit(0);
		}
	puts("NO");
	return 0;
}