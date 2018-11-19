#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#define RG register
using namespace std;
inline int gi(){
	RG char ch=getchar();RG int x=0,q=0;
	while(ch<'0' || ch>'9') ch=='-'?q=1:0,ch=getchar();
	while(ch>='0' && ch<='9') x=x*10+ch-'0',ch=getchar();
	return q?(-x):x;
}
int main(){
	//freopen("1.in","r",stdin);
	//freopen("1.out","w",stdout);
	int h=gi(),m=gi(),s=gi(),t1=gi(),t2=gi();
	double hh=h,mm=1.0*m/5,ss=1.0*s/5;
	mm+=ss/720,hh+=mm/720;
	if (t1>t2) swap(t1,t2);
	if (t1<hh && t1<mm && t1<ss && t2>hh && t2>mm && t2>ss) { puts("YES"); return 0; }
	if (!(t1<hh && hh<t2) && !(t1<mm && mm<t2) && !(t1<ss && ss<t2)) { puts("YES"); return 0; }
	puts("NO");
	return 0;
}
