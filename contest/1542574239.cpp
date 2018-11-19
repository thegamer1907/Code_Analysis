#include <bits/stdc++.h>
#define gc getchar()
#define ll long long
using namespace std;
char a[2],b[2];
int n,num[1000][2];
int read()
{
	int x=1;
	char ch;
	while (ch=gc,ch<'0'||ch>'9') if (ch=='-') x=-1;
	int s=ch-'0';
	while (ch=gc,ch>='0'&&ch<='9') s=s*10+ch-'0';
	return x*s;
}
int main()
{
	a[0]=gc,a[1]=gc;
	n=read();
	for (int i=1;i<=n;i++)
	{
		while (b[0]=gc,b[0]<'a'||b[0]>'z');
		b[1]=gc;
		if (b[0]==a[0]&&b[1]==a[1])
		{
			puts("YES");
			return 0;
		}
		num[b[0]][0]++,num[b[1]][1]++;
	}
	if (num[a[0]][1]&&num[a[1]][0]) puts("YES");
	else puts("NO");
	return 0;
}
