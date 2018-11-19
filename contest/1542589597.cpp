//#include <bits/stdc++.h>
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <limits>
#define For(n) for (int i=1;i<=n;++i)
#define rep(i,n) for (int i=1;i<=n;++i)
#define repp(i,x,y) for (int i=x;i<=y;++i)
#define LL long long
//#define int LL
using namespace std;
const int N=1e5+100;
const int INF =numeric_limits<int >::max();
char s[233][233];
int bo[2333][3];
void read(int &x)
{
	x=0;
	char ch=getchar();
	int f=1;
	while (!isdigit(ch)) (ch=='-'?f=-1:0),ch=getchar();
	while ( isdigit(ch)) x=x*10+ch-'0',ch=getchar();
	x*=f;
}
int n;
signed main()
{
	scanf("%s",s[0]);
	read(n);
	For(n) scanf("%s",s[i]),bo[s[i][1]][0]=bo[s[i][0]][1]=1;
	For(n)
	  if (s[i][0]==s[0][0]&&s[i][1]==s[0][1]) 
	  {
	  	return printf("YES"),0;
	  }
	if (bo[s[0][0]][0]&&bo[s[0][1]][1]) printf("YES");
	else  printf("NO");
	return 0;
}