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

int h,m,s,t1,t2;
int a[5];

int main(){
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin),
	freopen("out.txt","w",stdout);
	#endif
	cin>>h>>m>>s>>t1>>t2;
	t1%=12,t2%=12;
	if(m==0 && s==0) h%=12;
	else h=(h+1)%12;
	if(s) m=(m+1)%60;
	s=((s+4)/5)%12,m=((m+4)/5)%12;
	a[0]=h,a[1]=m,a[2]=s;
	sort(a+0,a+3);
	//cerr<<a[0]<<' '<<a[1]<<' '<<a[2]<<endl;
	if(t1>=a[0] && t1<a[1] && t2>=a[0] && t2<a[1]){puts("YES");return 0;}
	if(t1>=a[1] && t1<a[2] && t2>=a[1] && t2<a[2]){puts("YES");return 0;}
	if((t1>=a[2] || t1<a[0]) && (t2>=a[2] || t2<a[0])){puts("YES");return 0;}
	puts("NO");
	return 0;
}
