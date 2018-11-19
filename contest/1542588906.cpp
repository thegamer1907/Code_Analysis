#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<queue>
#include<set>
#include<map>
#include<vector>
typedef long long int LL;
typedef unsigned long long ULL;
const int INF=0x3f3f3f3f;
const LL INFLL=0x3f3f3f3f3f3f3f3fll;
LL getint(){
	LL ret=0;bool f=0;char c;
	while((c=getchar())<'0'||c>'9')if(c=='-')f^=1;
	while(c>='0'&&c<='9'){ret=ret*10+c-'0';c=getchar();}
	return f?-ret:ret;
}
using namespace std;
double eps=1e-6;
bool equals(double a,double b){return a>b-eps&&a<b+eps;}
double a[10];
int main(){
	double h=getint(),m=getint(),s=getint();
	double tmp=(m+s/60)/60;
	h=h*30+tmp*30;
	m=m*6+(s/60)*6;
	s=s*6;
	double t1=30*getint(),t2=30*getint();
	a[1]=h;a[2]=m;a[3]=s;a[4]=t1;a[5]=t2;
	sort(a+1,a+6);
	a[6]=a[1];
	for(int i=1;i<=5;++i){
		if((equals(a[i],t1)&&equals(a[i+1],t2))||(equals(a[i],t2)&&equals(a[i+1],t1))){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}

