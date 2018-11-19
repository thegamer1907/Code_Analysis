#include<stdio.h>
int main(){
	int a,b,c,d,e,t1=0,t2=0,t3=0;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(e<d){
		e=e^d;
		d=e^d;
		e=e^d;
	}
	if(a<d || a>=e) t1=1;
	if(b<d*5 || b>=e*5) t2=1;
	if(c<d*5 || c>=e*5) t3=1;
	if(t1==t2 && t2==t3) printf("YES"); else printf("NO");
	return 0;
}