#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;

int h,m,s,t1,t2;
int a[5];

int main(){
	cin>>h>>m>>s>>t1>>t2;
	t1%=12,t2%=12;
	if(m==0 && s==0) h%=12;
	else h=(h+1)%12;
	if(s) m=(m+1)%60;
	s=((s+4)/5)%12,m=((m+4)/5)%12;
	a[0]=h,a[1]=m,a[2]=s;
	sort(a+0,a+3);
	if(t1>=a[0] && t1<a[1] && t2>=a[0] && t2<a[1]){puts("YES");return 0;}
	if(t1>=a[1] && t1<a[2] && t2>=a[1] && t2<a[2]){puts("YES");return 0;}
	if((t1>=a[2] || t1<a[0]) && (t2>=a[2] || t2<a[0])){puts("YES");return 0;}
	puts("NO");
	return 0;
}