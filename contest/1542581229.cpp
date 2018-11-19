#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

double a,b,c,d,e;
double z[9];

int cmp(int x,int y){ return z[x]<z[y]; }

int main(){
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	a = (a + b/60 + c/3600)*5;
	if(a>60) a-=60;
	b = b + c/60;
	d *= 5; e *= 5;
	if(d==a || d==b || d==c || e==a || e==b || e==c){ printf("NO"); return 0; }
	z[1]=a; z[2]=b; z[3]=c; z[4]=d; z[5]=e;
	sort(z+1,z+5+1);
	if(z[1]==d && z[5]==e){ printf("YES"); return 0; }
	if(z[1]==e && z[5]==d){ printf("YES"); return 0; }
	for(int i=1; i<=5; ++i){
		if(z[i]==d){
			if(z[i+1]==e) printf("YES");
			else printf("NO");
			//while(1);
			return 0;
		}
		if(z[i]==e){
			if(z[i+1]==d) printf("YES");
			else printf("NO");
			//while(1);
			return 0;
		}
	}
}
