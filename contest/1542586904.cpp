#include <cstdio>
#include <algorithm>
#include <cmath>

using std::sort;
using std::abs;
using std::swap;

int h,m,s,t1,t2;
double deg[5],deg1,deg2;

int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	deg[1]=(double)((double)h+(double)m/60+(double)s/3600)/12*360;
	deg[2]=(double)((double)m+(double)s/60)/60*360;
	deg[3]=(double)s/60*360;
	deg1=t1*360/12,deg2=t2*360/12;
	sort(deg+1,deg+4);
	if(deg1>deg2) swap(deg1,deg2);
	bool flag=false;
	if(deg1<deg[1] && deg[3]<deg2) flag=true;
	if(deg[1]<deg1 && deg2<deg[2]) flag=true;
	if(deg2<deg[1]) flag=true;
	if(deg[2]<deg1 && deg2<deg[3]) flag=true;
	if(deg[3]<deg1) flag=true;
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}
