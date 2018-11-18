#include<cstdio>
#include<iostream>
#include<cstring>
#define inf 1e9
#define N 200005
using namespace std;
int h,m,s,t1,t2,a[100];
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	t1%=12;h%=12;t2%=12;
	t1*=5;t2*=5;h*=5;
	if(!(m==0&&s==0)) h++;
	a[h]=a[m]=a[s]=1;
	if(a[t1]==1) a[t1]=0,a[t1+1]=1;
	if(a[t2]==1) a[t2]=0,a[t2+1]=1;
	if(t1==t2) {printf("YES\n");return 0;}
	while(a[(t2+1)%60]!=1){
		t2=(t2+1)%60;
		if(t1==t2) {printf("YES\n");return 0;}
	}
	while(a[(t1+1)%60]!=1){
		t1=(t1+1)%60;
		if(t1==t2) {printf("YES\n");return 0;}
	}
	printf("NO");
}