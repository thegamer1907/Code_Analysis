#include<bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2,f;
double x,y,z;

int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if (m>0 || s>0) x=h%12+0.5; else x=h;
	if (m%5 || s>0) y=m/5+0.5; else y=m/5;
	if (s%5) z=s/5+0.5; else z=s/5;
	if (t1>t2) swap(t1,t2);
	f=(t1<x && x<t2)+(t1<y && y<t2)+(t1<z && z<t2);
	if (f==0 || f==3) puts("YES"); else puts("NO");
}

/*
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	x=(h*60*60+m*60+s) % (60*60*12);
	y=(m*12*60+s*12) % (60*60*12);
	z=(s*12*60) % (60*60*12);
	if (t1>t2) swap(t1,t2);
	t1*=(t1*60*60) % (60*60*12);
	t2*=(t2*60*60) % (60*60*12);
	f= (x>t1 && x<t2) + (y>t1 && y<t2) + (z>t1 && z<t2);
	if (f==0 || f==3) printf("YES"); else printf("NO");
}
*/
