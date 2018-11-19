#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int h,m,s,t1,t2;
double jiaodu[5],jiaodu1,jiaodu2;

int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	jiaodu[1]=(double)((double)h+(double)m/60+(double)s/3600)/12*360;
	jiaodu[2]=(double)((double)m+(double)s/60)/60*360;
	jiaodu[3]=(double)s/60*360;
	jiaodu1=t1*360/12,jiaodu2=t2*360/12;
	sort(jiaodu+1,jiaodu+4);
	if(jiaodu1>jiaodu2) swap(jiaodu1,jiaodu2);
	bool flag=false;
	if(jiaodu1<jiaodu[1] && jiaodu[3]<jiaodu2) flag=true;
	if(jiaodu[1]<jiaodu1 && jiaodu2<jiaodu[2]) flag=true;
	if(jiaodu2<jiaodu[1]) flag=true;
	if(jiaodu[2]<jiaodu1 && jiaodu2<jiaodu[3]) flag=true;
	if(jiaodu[3]<jiaodu1) flag=true;
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}
