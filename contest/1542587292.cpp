#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int h,m,s,t1,t2,p1=0,p2=0;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h*=5;
	t1*=5;
	t2*=5;
	if (t1>t2) swap(t1,t2);
	if ((t1<=h && h<t2) || (t1<=m && m<t2) || (t1<=s && s<t2)) p1=1;
	if ((h<t1 || h>=t2) || (m<t1 || m>=t2) || (s<t1 || s>=t2)) p2=1;
	if (p1==0 || p2==0) puts("YES"); else puts("NO");
}