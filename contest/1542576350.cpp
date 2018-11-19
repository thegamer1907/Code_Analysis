#include<stdio.h>
#include<string.h>
#define exp 1e-8
int main()
{
	int i,f,num;
	double h,m,s,t,t1,t2,zon;
	while(~scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2))
	{
		m+=s/60;
		h+=m/60;
		h*=5;
		//if(h>60) h-=60;
		//printf("h=%lf  m=%lf  s=%lf\n",h,m,s);
		if(t1>t2)
		{
			t=t1;
			t1=t2;
			t2=t;
		}
		t1*=5;
		t2*=5;
		num=0;
		if(h-t1>exp&&t2-h>exp) num++;
		if(m-t1>exp&&t2-m>exp) num++;
		if(s-t1>exp&&t2-s>exp) num++;
		if(num==0||num==3) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
/*
12 0 0 12 1
*/