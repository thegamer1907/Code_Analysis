#include <cstdio>
#include <algorithm>
using namespace std;
int i,j,m,n,h,s,t1,t2;
int pos1,pos2,pos3,x1,x2,x3,b1,b2;
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if (h==12) h=0;
	if (t1==12) t1=0;
	if (t2==12) t2=0;
	pos1=(5*h+m/12);
	pos2=m;
	pos3=s;
	x1=min(min(pos1,pos2),pos3);
	x3=max(max(pos1,pos2),pos3);
	x2=pos1+pos2+pos3-x1-x3;
	t1*=5;
	t2*=5;
	if ((t1<=x1)) b1=1;
	else if ((t1>x1)&&(t1<=x2)) b1=2;
	else if ((t1>x2)&&(t1<=x3)) b1=3;
	else b1=1;
	if ((t2<=x1)) b2=1;
	else if ((t2>x1)&&(t2<=x2)) b2=2;
	else if ((t2>x2)&&(t2<=x3)) b2=3;
	else b2=1;
	/*if (b1==b2){
		if (t1<t2)printf("YES\n");
		else printf("NO\n");
		return 0;
	}
	if ((b1==4)&&(b2==1))printf("YES\n");
	else printf("NO\n");*/
	if (b1==b2)printf("YES\n");
	else printf("NO\n");
	return 0;
}