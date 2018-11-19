#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<set>
using namespace std;
const int maxn=210;
char b[maxn][maxn],e[maxn][maxn];
set<int> S[maxn][25];
int n,m,len[maxn];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		char st[205]; scanf("%s",st+1); len[i]=strlen(st+1);
		for(int j=1;j<=min(18,len[i]);j++) b[i][j]=st[j], e[i][j]=st[len[i]-j+1];
		for(int j=1;j<=min(18,len[i]);j++){
			for(int k=1;k+j-1<=len[i];k++){
				int now=0; for(int t=k;t<=k+j-1;t++) now=(now<<1)+st[t]-'0';
				S[i][j].insert(now);
			}
		}
		len[i]=min(len[i],18);
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		int x,y; scanf("%d%d",&x,&y);
		n++;
		for(int j=1;j<=18;j++){
			for(int u : S[x][j]) S[n][j].insert(u);
			for(int u : S[y][j]) S[n][j].insert(u);
		}
		for(int j=1;j<=len[x];j++)
			for(int k=1;j+k<=18&&k<=len[y];k++){
				int now=0;
				for(int t=1;t<=j;t++) now=(now<<1)+e[x][j-t+1]-'0';
				for(int t=1;t<=k;t++) now=(now<<1)+b[y][t]-'0';
				S[n][j+k].insert(now);
			}
		for(int j=1;j<=len[x];j++) b[n][j]=b[x][j]; for(int j=1;j<=len[y];j++) b[n][j+len[x]]=b[y][j];
		for(int j=1;j<=len[y];j++) e[n][j]=e[y][j]; for(int j=1;j<=len[x];j++) e[n][len[y]+j]=e[x][j];
		len[n]=min(len[x]+len[y],18);
		bool pd=0;
		for(int j=18;j>=1;j--) if(S[n][j].size()==(1<<j)){ printf("%d\n",j); pd=1; break; }
		if(!pd) printf("%d\n",0);
	}
	return 0;
}