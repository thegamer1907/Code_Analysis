#include <cstdio>
#include <cstring>
bool canWalk(int s,int t,int p) {
	if (s<t) s+=3600*12;
	if (p<t) p+=3600*12;
	return p>s;
}
int main() {
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	h*=3600, m*=3600, s*=3600;
	h=h+m/60+s/3600;
	m=(m+s/60)/5;
	s=s/5;
	h%=3600*12; m%=3600*12; s%=3600*12;
	t1=t1%12*3600,t2=t2%12*3600;
	if (canWalk(t1,t2,h)&&canWalk(t1,t2,m)&&canWalk(t1,t2,s)||canWalk(t2,t1,h)&&canWalk(t2,t1,m)&&canWalk(t2,t1,s)) puts("YES"); else puts("No");
}