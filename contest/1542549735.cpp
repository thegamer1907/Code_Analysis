#include <stdio.h>

int main(){
	int h,m,s,t1,t2;
	scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
	// to angle
	double hh,mh;
	int sh;
	t1=(t1%12)*30;
	t2=(t2%12)*30;
	hh=(h%12)*30+(double)m/2+(double)s/120;
	mh=m*6+(double)s/10;
	sh=s*6;

	if (t1>t2){
		int tmp=t1;
		t1=t2;
		t2=tmp;
	}
	int flag=(((t1<hh && hh<t2)&&(t1<mh && mh<t2)&&(t1<sh && sh<t2))||((t2<hh || hh<t1)&&(t2<mh || mh<t1)&&(t2<sh || sh<t1)))? 1:0;
	if (flag) printf("YES\n");
	else printf("NO\n");
	return 0;
}
