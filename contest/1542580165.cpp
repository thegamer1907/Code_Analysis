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
int n,k,x;
int a[N],cnt[N<<1];
signed main()
{
	scanf("%d %d",&n,&k);
	For(n)
	{
		for (int j=0;j<k;++j) read(x),a[i]=x|(a[i]<<1);
		if (a[i]==0)
		{
			return printf("YES"),0;
		}
		++cnt[a[i]];
	}
	int tot=(1<<k);
	//For(n) 
	 // if (cnt[tot^a[i]])
	 for (int i=1;i<tot;++i)
	   if (cnt[i])
	     for (int j=1;j<tot;++j)
	       if (cnt[j])
	         if ((i&j)==0)
	           return printf("YES"),0;
	return printf("NO"),0;
}