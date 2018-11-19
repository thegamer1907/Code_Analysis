#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

const int MAXN=1000;

int a[4],t1,t2;
int flag1,flag2;

bool Inrange(int x,int t,int y){
	if(x<t && t<=y) return true;
	return false;
}

void init(){
	scanf("%d%d%d%d%d",&a[1],&a[2],&a[3],&t1,&t2);
	a[2]/=5,a[3]/=5;
	sort(a+1,a+4);
	if(Inrange(a[1],t1,a[2])==true) flag1=1;
	else if(Inrange(a[2],t1,a[3])==true) flag1=2;
	else flag1=3;
	
	if(Inrange(a[1],t2,a[2])==true) flag2=1;
	else if(Inrange(a[2],t2,a[3])==true) flag2=2;
	else flag2=3;
	
	if(flag1==flag2){
		printf("YES\n");
		return ;
	}
	printf("NO\n");
}

int main(int argc, char** argv) {
	init();
	return 0;
}
