#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	int s1=min(t1,t2),s2=max(t1,t2);
	int ss=0,tt=0;
	double hh=h+m/60.0+s/3600.0,mm=m/5.0+s/300.0,sss=s/5.0;
	if(hh>=s1 && hh<=s2) ss++; else tt++;
	if(mm>=s1 && mm<=s2) ss++; else tt++;
	if(sss>=s1 && sss<=s2) ss++; else tt++;
	if(ss>0 && tt>0) printf("NO"); else printf("YES");
	return 0;
}