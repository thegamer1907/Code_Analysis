#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n,m,k,t1,t2;
bool flag,flag2;

void read(){
	scanf("%d%d%d%d%d",&n,&m,&k,&t1,&t2);
	n%=12,t1%=12,t2%=12;
	m%=60,n%=60;
}

int cal(int num){
	return num/5;
}

int main(){
	read();
//	if (n==12) n=0;
	m=cal(m);
	k=cal(k);
	if (t2<t1) swap(t1,t2);
	if (t1==t2){
		printf("YES");
		return 0;
	}
	for (int i=t1;i<t2;i++){
		if (i==n||i==m||i==k){
			flag=1;
			break;
		}
	}
	for (int i=t2;i!=t1;i++,i%=12){
		if (i==n||i==m||i==k){
			flag2=1;
			break;
		}
	}
	if (flag&&flag2) printf("NO");
	else printf("YES");
}
