#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<algorithm>
#include<string.h>
bool cmp(float x,float y){
	return x<y;
}
int check(float x,float y,float z){
//	printf("%f	%f	%f\n",x,y,z);
	if(z<y&&z>x)
		return 1;
	return 0;
}
using namespace std;
int main(){
	int h,m,s,x,y;
	float a[3],r,t;
		scanf("%d%d%d%d%d",&h,&m,&s,&x,&y);
		a[0]=(h%12)*30+(m%60)*(6*1.0/60)+(s%60)*(6*1.0/3600);
		a[1]=(m%60)*6+(s%60)*(6*1.0/60);
		a[2]=(s%60)*6;
		r=(x%12)*1.0*30;
		t=(y%12)*30*1.0;
		sort(a,a+3,cmp);
		int flag=0;
		if(check(a[0],a[1],r)&&check(a[0],a[1],t))
			flag=1;
		if(check(a[1],a[2],r)&&check(a[1],a[2],t))
			flag=1;
		if((check(a[2],360*1.0,r)||check(0,a[0],r)||r==0)&&(t==0||check(a[2],360*1.0,t)||check(0,a[0],t)))
			flag=1;
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
}
