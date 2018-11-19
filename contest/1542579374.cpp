#include<stdio.h>
void sort(double *a,double *b,double *c){
	double t;
	if(*a>*b){
		t=*a;*a=*b;*b=t;
	}
	if(*a>*c){
		t=*a;*a=*c;*c=t;	
	}
	if(*b>*c){
		t=*b;*b=*c;*c=t;
	}
}
int main(){
	double h,m,s;
	scanf("%lf%lf%lf",&h,&m,&s);
	double t1,t2;
	scanf("%lf%lf",&t1,&t2);
	t1=t1/12;
	t2=t2/12;
	double s1=s/60;
	double m1=s1/60+m;
		if(m1>60) m1-=60;
		m1/=60;
	double h1=m1/12+h;
		if(h1>12) h1-=12;
		h1/=12;
	sort(&s1,&m1,&h1);
	int f=0;
	if(t1>s1&&t1<m1&&t2>s1&&t2<m1) f=1;
	if(t1>m1&&t1<h1&&t2>m1&&t2<h1) f=1;
	if((t1>h1||t1<s1)&&(t2>h1||t2<s1)) f=1;
	if(f==1) 
		printf("YES\n");
	else printf("NO\n");
}
