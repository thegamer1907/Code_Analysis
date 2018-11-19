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

char a[5],s[5];

int main()
{
	scanf("%s",a+1);
	int n,i;
	bool f1,f2;
	f1=f2=false;
	n=gi();
	for (i=1; i<=n; ++i)
		{
			scanf("%s",s+1);
			if (s[1] == a[1] && s[2] == a[2])
				puts("YES"), exit(0);
			if (s[2] == a[1])
				f1=true;
			if (s[1] == a[2])
				f2=true;
		}
	if (f1 && f2)
		puts("YES");
	else
		puts("NO");
	return 0;
}