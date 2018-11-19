#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <cstring>

using namespace std;

const int N=210;

int n,m,len[N];
char a[N][N],b[N][N],e[N][N];

set<int> S[N][25];

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",a[i]+1); len[i]=strlen(a[i]+1);
		for(int j=1;j<=len[i] && j<=18;j++) b[i][j]=a[i][j],e[i][j]=a[i][len[i]-j+1];
		for(int j=1;j<=18 && j<=len[i];j++){
			for(int k=1;k+j-1<=len[i];k++){
				int cur=0;
				for(int s=1;s<=j;s++)
					cur=cur*2+a[i][k+s-1]-'0';
				S[i][j].insert(cur);
			}
		}
		len[i]=min(len[i],18);
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		for(int j=1;j<=18;j++){
			for(int u : S[x][j]) S[i+n][j].insert(u);
			for(int u : S[y][j]) S[i+n][j].insert(u);
		}
		for(int j=1;j<=len[x];j++)
			for(int k=1;j+k<=18 && k<=len[y];k++){
				int cur=0;
				for(int s=1;s<=j;s++) cur=cur*2+e[x][j-s+1]-'0';
				for(int s=1;s<=k;s++) cur=cur*2+b[y][s]-'0';
				S[i+n][j+k].insert(cur);
			}
		len[i+n]=len[x]+len[y];
		for(int j=1;j<=len[x];j++) b[i+n][j]=b[x][j];
		for(int j=1;j<=len[y];j++) b[i+n][j+len[x]]=b[y][j];
		for(int j=1;j<=len[y];j++) e[i+n][j]=e[y][j];
		for(int j=1;j<=len[x];j++) e[i+n][len[y]+j]=e[x][j];
		len[i+n]=min(len[i+n],18);
		int pt=0;
		for(int j=18;j;j--){
			if(S[i+n][j].size()==(1<<j)){
				printf("%d\n",j),pt=1; break;	
			}
		}
		if(!pt) printf("%d\n",0);
	}
	return 0;
}