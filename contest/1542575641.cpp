#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

double h,s,t,t1,t2;
struct node{
	double a; int id; node(){} node(double _a,int _id){a=_a,id=_id;}
	bool operator <(const node &x)const{return a<x.a;}
}p[10];

inline int read(){
	int x=0,f=1; char ch=getchar();
	for (;ch<'0'||ch>'9';ch=getchar()) if (ch=='-') f=-1;
	for (;ch>='0'&&ch<='9';ch=getchar()) x=x*10+ch-'0';
	return x*f;
}

inline void print(int x){
	if (x<0){putchar('-'); x=-x;}
	if (x>=10) print(x/10);
	putchar(x%10+'0');
}

int main(){
	h=read(),s=read(),t=read(),t1=read(),t2=read();
	h*=5,t1*=5,t2*=5; if (t) s+=0.5; if (s) h+=0.5;
	p[1]=node(h,0),p[2]=node(s,0),p[3]=node(t,0),p[4]=node(t1,1),p[5]=node(t2,1);
	sort(p+1,p+6); int pps=0,modpps=0;
	for (int i=1;i<=5;i++){
		if (p[i].id&&!pps) pps=i;
		else if (p[i].id) modpps=i;
	}
	if ((pps==1&&modpps==5)||(pps==5&&modpps==1)||abs(pps-modpps)==1) puts("YES");
	else puts("NO");
	return 0;
}
