#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;

namespace INPUT{
	const int L=1<<15;
	char _buf[L],*S,*T,c;
	char _gc(){
		if(S==T){
			T=(S=_buf)+fread(_buf,1,L,stdin);
			if(S==T) return EOF;
		}
		return *S++;
	}
	void readi(int &X){
		bool flag;
		for(c=_gc();(c<'0'||c>'9')&&c!='-';c=_gc());
		if(c=='-') X=0,flag=true; else X=c&15,flag=false;
		for(c=_gc();c>='0'&&c<='9';X=X*10+(c&15),c=_gc());
	}
}
using INPUT::readi;

const int Maxn=205;

int N,M;
int num[15];
char s[Maxn];
int S[Maxn];
int S1[Maxn][Maxn];
bool mrk[Maxn][15][10000];

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin),
	freopen("out.txt","w",stdout);
	#endif
	scanf("%d",&N);
	for(int i=1;i<=N;++i){
		scanf("%s",s+1);
		S1[i][0]=strlen(s+1);
		for(int j=1;j<=S1[i][0];++j)
			S1[i][j]=s[j]-'0';
	}
	memset(mrk,false,sizeof(mrk));
	for(int i=1;i<=N;++i)
		for(int j=1;j<=min(S1[i][0],12);++j){
			int cur=0;
			for(int k=1;k<j;++k) cur=cur<<1|S1[i][k];
			//if(i==1 && j==2) cerr<<'a';
			for(int k=j;k<=S1[i][0];++k){
				cur=cur<<1|S1[i][k];
				mrk[i][j][cur]=true;
				//if(i==1 && j==2) cerr<<cur<<' ';
				cur-=S1[i][k-j+1]<<j-1;
			}
			//if(i==1 && j==2) cerr<<endl;
		}
	scanf("%d",&M);
	for(int q=N+1;q<=N+M;++q){
		int x,y,n=0,Ans=0;
		scanf("%d %d",&x,&y);
		memset(S,0,sizeof(S));
		memset(num,0,sizeof(num));
		for(int l=1;l<=12;++l)
			for(int j=0;j<(1<<l);++j){
				mrk[q][l][j]=(mrk[x][l][j]|mrk[y][l][j]);
				num[l]+=mrk[q][l][j];
				//if(l==2 && mrk[q][l][j]) cerr<<j<<endl;
			}
		for(int i=max(1,S1[x][0]-11);i<=S1[x][0];++i) S[++n]=S1[x][i];
		//for(int i=max(1,S2[x][0]-11);i<=S2[x][0];++i) S[++n]=S2[x][i];
		for(int i=1;i<=min(12,S1[y][0]);++i) S[++n]=S1[y][i];
		//for(int i=1;i<=min(12-S1[y][0],S2[y][0]);++i) S[++n]=S2[y][i];
		//for(int i=1;i<=n;++i) cerr<<S[i];cerr<<endl;
		for(int l=1;l<=min(n,12);++l){
			int cur=0;
			for(int i=1;i<l;++i) cur=cur<<1|S[i];
			for(int i=l;i<=n;++i){
				cur=cur<<1|S[i];
				num[l]+=(mrk[q][l][cur]==false);
				mrk[q][l][cur]=true;
				cur-=S[i-l+1]<<l-1;
			}
		}
		while(num[Ans+1]==(1<<Ans+1)) ++Ans;
		printf("%d\n",Ans); n=0;
		for(int i=1;i<=S1[x][0];++i) S[++n]=S1[x][i];
		for(int i=1;i<=S1[y][0];++i) S[++n]=S1[y][i];
		for(int i=1;i<=min(n,12);++i) S1[q][++S1[q][0]]=S[i];
		for(int i=max(n-11,min(n,12)+1);i<=n;++i) S1[q][++S1[q][0]]=S[i];
		
		//for(int i=1;i<=min(S1[x][0],12);++i) S1[q][++S1[q][0]]=S1[x][i];
		//for(int i=1;i<=min(S2[x][0],12-S1[x][0]);++i) S1[q][++S1[q][0]]=S2[x][i];
		//for(int i=max(1,S1[x][0]-(12-S2[x][0])+1);i<=S1[x][0];++i) S2[q][++S2[q][0]]=S1[x][i];
		//for(int i=max(1,S2[x][0]-11);i<=S2[x][0];++i) S2[q][++S2[q][0]]=S2[x][i];
		//for(int i=1;i<=min(S1[x][0],12);++i) S1[q][++S1[q][0]]=S1[x][i];
		//for(int i=1;i<=min(S1[y][0],12);++i) S1[q][++S1[q][0]]=S1[y][i];
		//for(int i=max(1,S1[x][0]-11);i<=S1[x][0];++i) S1[q][++S1[q][0]]=S1[x][i];
		//for(int i=max(1,S1[y][0]-11);i<=S1[y][0];++i) S1[q][++S1[q][0]]=S1[y][i];//cerr<<q<<' '<<S1[y][i]<<endl;
		//for(int i=1;i<=S1[q][0];++i) cerr<<S1[q][i];cerr<<endl;
	}
	return 0;
}
