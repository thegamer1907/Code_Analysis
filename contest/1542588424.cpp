#include<string>
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

const int Maxn=105;

int N;
string c;
string S[Maxn];

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin),
	freopen("out.txt","w",stdout);
	#endif
	cin>>c; cin>>N;
	for(int i=1;i<=N;++i)
		cin>>S[i];
	for(int i=1;i<=N;++i)
		if(S[i]==c){puts("YES");return 0;}
	for(int i=1;i<=N;++i)
		for(int j=1;j<=N;++j){
			string k;
			k+=S[i][1];
			k+=S[j][0];
			if(k==c){puts("YES");return 0;}
		}
	puts("NO");
	return 0;
}

