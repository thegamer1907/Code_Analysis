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

int vis[1000];
db t[10];

int main()
{
	int t1,t2,i;
	scanf("%lf%lf%lf",&t[1],&t[2],&t[3]);
	t[1]+=t[2]/60+t[3]/3600, t[1]*=5, t[2]+=t[3]/60;
	while (t[1] >= 60)
		t[1]-=60;
	t1=gi()*5%60, t2=gi()*5%60;
	sort(t+1,t+4);
	i=ceil(t[3]);
	while (i != floor(t[1]))
		{
			vis[i]=3, i++;
			if (i >= 60)
				i=0;
		}
	vis[i]=3;
	for (i=ceil(t[1]); i<=floor(t[2]); ++i)
		vis[i]=1;
	for (i=ceil(t[2]); i<=floor(t[3]); ++i)
		vis[i]=2;
	if (vis[t1] != vis[t2])
		puts("NO");
	else
		puts("YES");
	return 0;
}