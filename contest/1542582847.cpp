#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int h,m,s,t1,t2;
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	int a1,a2,a3;
	if(h==12)h=0;
	a1=30*h;
	a2=6*m;
	a3=6*s;
	a1++;
	a2++;
	if(t1==12)t1=0;
	t1=t1*30;
	if(t2==12)t2=0;
	t2=t2*30;
	if(t1>t2)swap(t1,t2);
	int cnt=0;
	if((a1>t1&&a1<t2)||(a2>t1&&a2<t2)||(a3>t1&&a3<t2)){
		cnt=1;
	}
	if(!cnt){
		printf("YES\n");
		return 0;
	}
	if((a1<t1&&a1<t2)||(a1>t1&&a1>t2)){
		printf("NO\n");
		return 0;
	}
		if((a2<t1&&a2<t2)||(a2>t1&&a2>t2)){
		printf("NO\n");
		return 0;
	}	if((a3<t1&&a3<t2)||(a3>t1&&a3>t2)){
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
}