#include<cstdio>
#include<cstring>
#include<cctype>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
int read(){
    char c;int s=0,t=1;
    while(!isdigit(c=getchar()))if(c=='-')t=-1;
    do{s=s*10+c-'0';}while(isdigit(c=getchar()));
    return s*t;
}
/*------------------------------------------------------------*/
const int inf=0x3f3f3f3f;

int n,a[10],t1,t2;
double A[10];
int main(){
	a[1]=read(),a[2]=read(),a[3]=read();
	t1=read();t2=read();
	
	if(a[2]>0||a[3]>0)A[1]=1.0*a[1]+0.5;else A[1]=a[1];
	if(A[1]>12)A[1]-=12;
	
	A[2]=a[2]/5;if(a[2]%5||a[3]>0)A[2]+=0.5;
	if(A[2]>12)A[2]-=12;
	
	A[3]=1.0*a[3]/5;
	if(A[3]>12)A[3]-=12;
	
	sort(A+1,A+3+1);
	//for(int i=1;i<=3;i++)printf("%.2lf ",A[i]);
	int x1=-1,x2=-1;
	if(A[1]<t1&&t1<A[2]){x1=1;}else 
	if(A[2]<t1&&t1<A[3]){x1=2;}else
	x1=3;
	if(A[1]<t2&&t2<A[2]){x2=1;}else 
	if(A[2]<t2&&t2<A[3]){x2=2;}else
	x2=3;
	//printf("x1=%d x2=%d\n",x1,x2);
	if(x1==x2)printf("YES");else printf("NO");
/*	
    a[1]=read()*2;a[2]=read()*2;a[3]=read()*2;t2=read()*2;t2=read()*2;
	if(a[2]>0||a[3]>0)a[1]++;if(a[1]>24)a[1]=1;
	a[2]=(a[2]-1)/5+1;if(
	a[3]=(a[3]-1)/5+1;
	sort(a+1,a+3+1);
	if(t1>=a[1]&&t2*/
	
	
    
    
    return 0;
}
