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

const int Maxn=1E5+5;

int N,M,K;
int a[Maxn];
bool mrk[1000];

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin),
	freopen("out.txt","w",stdout);
	#endif
	cin>>N>>M;
	for(int i=1,x;i<=N;++i){
		for(int j=1;j<=M;++j){
			scanf("%d",&x);
			a[i]=(a[i]<<1)|x;
		}
		if(a[i]==0){
				puts("YES");
				return 0;
			}
	}
	K=(1<<M)-1;
	for(int i=1;i<=N;++i){
		for(int j=0;j<K;++j)
			if((a[i]&j)==0 && mrk[j]){
				puts("YES");
				return 0;
			}
		mrk[a[i]]=true;
	}
	puts("NO");
	return 0;
}

