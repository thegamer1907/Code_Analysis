#include <bits/stdc++.h>
using namespace std;
int a[4];
int main(){
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	m=m/5;
	s=s/5;
	a[0]=h;
	a[1]=m;
	a[2]=s;
	sort(a,a+3);
	for(int i=0;i<2;i++)
		if (a[i]<t1 && t1<=a[i+1] && a[i]<t2 && t2<=a[i+1])
			return puts("YES"),0;
	if ((a[2]<t2 || t2<=a[0]) && (a[2]<t1 || t1<=a[0]))
		return puts("YES"),0;
	puts("NO"); 
}