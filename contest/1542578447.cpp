#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
#include<vector>
typedef long long int LL;
typedef unsigned long long ULL;
const int INF=0x3f3f3f3f;
const LL INFLL=0x3f3f3f3f3f3f3f3fll;
LL getint(){
	LL ret=0;bool f=0;char c;
	while((c=getchar())<'0'||c>'9')if(c=='-')f^=1;
	while(c>='0'&&c<='9'){ret=ret*10+c-'0';c=getchar();}
	return f?-ret:ret;
}
using namespace std;
const int MAXN=200;
int bgn[MAXN+10],ed[MAXN+10];
bool vis[MAXN+10][14][(1<<12)+10];
int len[MAXN+10];
char tmp[MAXN+10];
bool r1[MAXN+10],r2[MAXN+10];
int main(){
	int n=getint();
	for(int i=1;i<=n;++i){
		scanf("%s",tmp+1);
		len[i]=strlen(tmp+1);
		for(int j=1;j<=len[i]&&j<=12;++j)
			bgn[i]=(bgn[i]<<1)|(tmp[j]=='1');
		for(int j=max(1,len[i]-12+1);j<=len[i];++j)
			ed[i]=(ed[i]<<1)|(tmp[j]=='1');
		for(int t=1;t<=len[i]&&t<=12;++t)
			for(int l=1;l<=len[i]-t+1;++l){
				int ret=0;
				for(int r=l;r<=l+t-1;++r)
					ret=(ret<<1)|(tmp[r]=='1');
				vis[i][t][ret]=1;
			}
		if(len[i]>12)len[i]=-1;
	}
	int q=getint();
	for(int u=n+1;u<=n+q;++u){
		int a=getint(),b=getint();
		//bool bug=a==9;
		if(len[a]==-1||len[b]==-1)len[u]=-1;
		else len[u]=len[a]+len[b];
		if(len[u]>12)len[u]=-1;
		if(len[a]==-1)bgn[u]=bgn[a];
		else if(len[u]==-1){
			if(len[b]==-1)bgn[u]=(bgn[a]<<(12-len[a]))|(bgn[b]>>len[a]);
			else bgn[u]=(bgn[a]<<(12-len[a]))|(bgn[b]>>(len[b]-12+len[a]));
		}
		else bgn[u]=(bgn[a]<<len[b])|bgn[b];
		if(len[b]==-1)ed[u]=ed[b];
		else if(len[u]==-1)
			ed[u]=((ed[a]&((1<<(12-len[b]))-1))<<len[b])|ed[b];
		else ed[u]=bgn[u];
		int len1=len[a]==-1?12:len[a],len2=len[b]==-1?12:len[b];
		for(int i=1;i<=len1;++i)
			r1[i]=(bool)(ed[a]&(1<<(len1-i)));
		//if(bug)printf("A\n%d\n",len2);
		for(int i=1;i<=len2;++i){
			r2[i]=(bool)(bgn[b]&(1<<(len2-i)));
		}
		for(int i=1;i<=12;++i)
			for(int j=0;j<(1<<i);++j)
				vis[u][i][j]=vis[a][i][j]|vis[b][i][j];
		for(int k=2;k<=12;++k){
			for(int j=max(1,k-len2);j<k&&j<=len1;++j){
				int ret=0;
				for(int i=len1-j+1;i<=len1;++i)
					ret=ret<<1|r1[i];
				for(int i=1;i<=k-j;++i)
					ret=ret<<1|r2[i];
				vis[u][k][ret]=1;
			}
		}
		bool flag=1;
		for(int k=12;k>=1;--k){
			bool tmp=1;
			for(int i=0;i<(1<<k);++i)
				if(!vis[u][k][i]){tmp=0;break;}
			if(tmp){printf("%d\n",k);flag=0;break;}
		}
		if(flag)printf("0\n");
	}
	return 0;
}
/*
1
0
1000
1 1
2 2
3 3
4 4
5 5
6 6
7 7
8 8
9 9
*/
