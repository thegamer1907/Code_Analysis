#include<cstdio>
using namespace std;
int h,m,s,t1,t2;
double hh,ss,mm,tt1,tt2;
int main()
{
	int i,j,k,T1=0,T2=0;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(t1==12)t1=0;if(t2==12)t2=0;if(h==12)h=0;
	tt1=t1;tt2=t2;
	ss=s/5.0;mm=m/5.0+ss/60.0;
	hh=h+mm/60.0;
	if(tt1>hh)T1++;if(tt2>hh)T2++;
	if(tt1>mm)T1++;if(tt2>mm)T2++;
	if(tt1>ss)T1++;if(tt2>ss)T2++;
	if(T1==T2){
		printf("YES\n");return 0;
	}
	if((T1==3&&T2==0)||(T2==3&&T1==0)){
		printf("YES\n");return 0;
	}
	printf("NO\n");return 0;
}
