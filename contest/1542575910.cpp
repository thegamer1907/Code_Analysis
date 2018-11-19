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

void read(int &x)
{
	x=0;
	char ch=getchar();
	int f=1;
	while (!isdigit(ch)) (ch=='-'?f=-1:0),ch=getchar();
	while ( isdigit(ch)) x=x*10+ch-'0',ch=getchar();
	x*=f;
}
int h,m,s,t1,t2;
int a[233];

int check(int l,int r)
{
	int x=0,y=0;
	for (int i=l;i<=r;++i)
	{
		if ((i%12?i%12:12)==t1)x=1;
	    if ((i%12?i%12:12)==t2)y=1;
	}
	  
	return x&&y;
}

signed main()
{
	scanf("%d %d %d %d %d",&h, &m, &s, &t1, &t2);m/=5;s/=5;
	a[1]=h;a[2]=m;a[3]=s;
	sort(a+1,a+4);
	
	if (check(a[1]+1,a[2])||check(a[2]+1,a[3])||check(a[3]+1,a[1]+12))
		  printf("YES");
	else printf("NO");
	return 0;
}