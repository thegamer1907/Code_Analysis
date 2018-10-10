
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long LL;

const int Maxn=1E6+5;

int N;
char s[Maxn];
bool mrk[Maxn];
int nxt[Maxn];

int main(){
	#ifndef ONLINE_JUDGE
	freopen("article.in","r",stdin),
	freopen("article.out","w",stdout);
	#endif
	//scanf("%s",s+1),N=strlen(s+1);
	gets(s+1),N=strlen(s+1);
	int X=1,Y=0;
	while(X<=N){
		if(Y==0 || s[X]==s[Y])
			X++,Y++,nxt[X]=Y;
		else
			Y=nxt[Y];
	}
	memset(mrk,false,sizeof(mrk));
	for(int i=2;i<=N;++i)
		mrk[nxt[i]-1]=true;
	X=N+1;
	while(nxt[X]>1)
		if(mrk[nxt[X]-1]){
			s[nxt[X]]=0;
			printf("%s",s+1);
			return 0;
		}else X=nxt[X];
	puts("Just a legend");
	//puts("Y can't find any classical string.");
	return 0;
}
