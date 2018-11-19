#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;i++)
int h,m,s,t1,t2,w1,w2;
double w[5];
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if (h==12) h=0;
	if (t1==12) t1=0;
	if (t2==12) t2=0;
	w[1]=h+(m*60+s)/3600.0;
	w[2]=(m*60+s)/300.0;
	w[3]=s/5.0;
	std::sort(w+1,w+4);
	w1=w2=3;
	if (w[1]<=t1&&t1<=w[2]) w1=1;
	if (w[2]<=t1&&t1<=w[3]) w1=2;
	if (w[1]<=t2&&t2<=w[2]) w2=1;
	if (w[2]<=t2&&t2<=w[3]) w2=2;	
	if (w1==w2) printf("YES\n");else printf("NO\n");
	return 0;
}