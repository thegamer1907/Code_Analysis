#include <stdio.h>
#include <algorithm>
#define R register
#define eps 1e-9
inline int read(){
	R int x; R bool f; R char c;
	for (f=0; (c=getchar())<'0'||c>'9'; f=c=='-');
	for (x=c-'0'; (c=getchar())>='0'&&c<='9'; x=(x<<3)+(x<<1)+c-'0');
	return f?-x:x;
}
int h,s,m,t1,t2,lim;
int main(){
	h=read(),s=read(),m=read();
	if (h==12) h=0;R double l[5],t1=read(),t2=read();
	l[1]=(h+s/60.0+m/3600.0)*30.0;
	l[2]=(s+m/60.0)*6.0;
	l[3]=m*6.0;R int ans1=-1,ans2=-1;
	std::sort(l+1,l+4);l[4]=l[1]+360.0;l[0]=l[3]-360.0;t1*=30,t2*=30;
	for (R int i=0; i<4; ++i) {
		if (l[i]<t1+eps&&t1<l[i+1]+eps) {
			ans1=i;
		}
		if (l[i]<t2+eps&&t2<l[i+1]+eps) {
			ans2=i;
		}
	}if (ans2==3) ans2=0;if (ans1==3) ans1=0;
	if (ans1==ans2) puts("YES");
	else puts("NO");
	return 0;
}
