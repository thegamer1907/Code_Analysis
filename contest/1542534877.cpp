/*
ID: Rec
PROG: test
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<queue>
#include<algorithm>
#include<stack>
double m,s;
int h,t1,t2;
double a[5];
int main(){
	while (scanf("%d%lf%lf%d%d",&h,&m,&s,&t1,&t2)!=EOF){
		h%=12;t1%=12;t2%=12;
		a[2]=s*1.0/60;
		a[1]=(m*1.0/60+1.0/60*s*1/60);
		a[0]=h*1.0/12+(m+s/60)/60*1/12;
		double m1=t1*1.0/12;
		double m2=t2*1.0/12;
		if (m1>m2)std::swap(m1,m2);
		std::sort(a,a+3);
		int b1=2;int b2=2;
		for (int i=0;i<2;i++){
			if (a[i]<=m1&&m1<=a[i+1])b1=i;
			if (a[i]<=m2&&m2<=a[i+1])b2=i;
		}
		if (b1!=b2)printf("NO\n");else printf("YES\n");
	}
	return 0;
}
