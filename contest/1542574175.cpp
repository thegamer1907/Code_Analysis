//Serene
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;
int h,m,s,t1,t2;
bool ok[130],f;

int main() {
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h%=12; t1%=12; t2%=12;
	h*=5; t1*=5; t2*=5;
	ok[2*s]=1;
	if(!s) ok[2*m]=1;
	else ok[(2*m+1)%120]=1;
	(h+=m/12)%=60;m%=12;
	if(!m&&!s) ok[2*h]=1;
	else ok[(2*h+1)%120]=1;
	for(int i=t1;i!=t2;i=(i+1)%60) if((f=ok[2*i]|ok[(2*i+1)%120])) break;
	if(!f) printf("YES");
	else {
		f=0;
		for(int i=t1;i!=t2;i=(i-1+60)%60) if((f=ok[2*i]|ok[(2*i-1+120)%120])) break;
		if(!f) printf("YES");
		else printf("NO");
	}
	return 0;
}
