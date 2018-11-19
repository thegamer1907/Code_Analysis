#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{ 
	bool flag1=1,flag2=1;
	double h,m,s,t1,t2,H,M,S;
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	m+=s/60;
	if(m>=60.0) m-=60.0;
	M=m+60.0;
	h=h*5.0+m/12; 
	if(h>=60.0) h-=60.0;
	H=h+60.0;
	S=s+60.0;
	t1*=5.0; t2*=5.0;
	if(t1>t2) swap(t1,t2);
	if((t1<h && h<t2) ||(t1<H && H<t2) ||(t1<m && m<t2) || (t1<M && M<t2) || (t1<s && s<t2) ||(t1<S && S<t2) ) 
	{
		flag1=0;
	}
	t1+=60;
	if(t1>t2) swap(t1,t2);
	if((t1<h && h<t2) ||(t1<H && H<t2) ||(t1<m && m<t2) || (t1<M && M<t2) || (t1<s && s<t2) ||(t1<S && S<t2) ) 
	{
		flag2=0;
	}
	if(flag1 || flag2) printf("YES\n");
	else printf("NO\n");
}
		 	  	 		   		 		 					 		 			