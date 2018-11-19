#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define MAXN 200

int h,m,s,T1,T2;
double b[MAXN],t1,t2;
int flag;

int main(){
	scanf("%d %d %d %d %d",&h,&m,&s,&T1,&T2);
	b[1]=(double)s;
	b[2]=(double)m+b[1]/60.0;
	b[3]=((double)h+b[2]/60.0)*5.0;
	std::sort(b+1,b+3+1);
	t1=T1*5.0;
	t2=T2*5.0;
//	printf("%lf %lf %lf %lf %lf",b[1],b[2],b[3],t1,t2);

	if(t1<b[1]&&b[3]<t2) flag=1;
	else if(t1<b[1]&&t2<b[1]) flag=1;
	else if(b[1]<t1&&t1<b[2]&&b[1]<t2&&t2<b[2]) flag=1;
	else if(b[2]<t1&&t1<b[3]&&b[2]<t2&&t2<b[3]) flag=1;
	else if(b[3]<t1&&b[3]<t2) flag=1;
	
	std::swap(t1,t2);
	if(t1<b[1]&&b[3]<t2) flag=1;
	else if(t1<b[1]&&t2<b[1]) flag=1;
	else if(b[1]<t1&&t1<b[2]&&b[1]<t2&&t2<b[2]) flag=1;
	else if(b[2]<t1&&t1<b[3]&&b[2]<t2&&t2<b[3]) flag=1;
	else if(b[3]<t1&&b[3]<t2) flag=1;
	if(flag) printf("YES");
	else printf("NO");
//	system("pause");
}


