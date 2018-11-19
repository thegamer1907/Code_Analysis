#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int ck[3],t1,t2;

int main(){
	scanf("%d%d%d%d%d",&ck[0],&ck[1],&ck[2],&t1,&t2);
	ck[0]%=12;t1%=12;t2%=12;
	ck[0]=ck[0]*3600+ck[1]*60+ck[2];
	ck[1]=(ck[1]*60+ck[2])*12;
	ck[2]=ck[2]*60*12;
	t1=t1*3600;t2=t2*3600;
	sort(ck,ck+3);
	if(t1>t2)swap(t1,t2);
	if(t1<ck[0]&&t2>ck[2])return puts("YES"),0;
	if(t1>ck[0]&&t1<ck[1]&&t2>ck[0]&&t2<ck[1])return puts("YES"),0;
	if(t1>ck[1]&&t1<ck[2]&&t2>ck[1]&&t2<ck[2])return puts("YES"),0;
	if((t1<ck[0]&&t2<ck[0])||(t1>ck[2]&&t2>ck[2]))return puts("YES"),0;
	puts("NO");
	return 0;
}