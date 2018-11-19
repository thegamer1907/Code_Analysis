#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,k;
int a[100011];
int getnum(){int num=0;char c=getchar();
	while(c<48)c=getchar();
	while(c>47)num=(num<<3)+(num<<1)+c-48,c=getchar();return num;
}
inline int max(const int &a,const int &b){if(a>b)return a;return b;}
inline int min(const int &a,const int &b){if(a<b)return a;return b;}
int main(){register int i,j;
	n=getnum();k=getnum();
	for(i=1;i<=n;++i)
		for(j=1;j<=k;++j)a[i]=(a[i]<<1)+getnum();
	sort(a+1,a+n+1);m=unique(a+1,a+n+1)-a-1;
	for(i=1;i<=m;++i)
		for(j=i;j<=m;++j)
			if(!(a[i]&a[j]))return printf("YES"),0;
	return printf("NO"),0;
}

