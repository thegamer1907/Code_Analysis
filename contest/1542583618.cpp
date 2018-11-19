/*
 Author: LargeDumpling
 Email: LargeDumpling@qq.com
 Edit History:
	2017-10-05	File created.
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int hh,mm,ss,tt1,tt2;
double h,m,s,t1,t2;
int main()
{
	bool flag1=true,flag2=true;
	scanf("%d%d%d%d%d",&hh,&mm,&ss,&tt1,&tt2);
	hh%=12; tt1%=12; tt2%=12;
	hh*=5; tt1*=5; tt2*=5;
	h=hh;
	m=mm;
	s=ss;
	t1=tt1;
	t2=tt2;
	m+=s/60;
	h+=m/60;
	if(t2<t1) swap(t1,t2);
	if((t1<=h&&h<=t2)||(t1<=m&&m<=t2)||(t1<=s&&s<=t2)) flag1=false;
	if(t2<=h||t2<=m||t2<=s||h<=t1||m<=t1||s<=t1) flag2=false;
	if(flag1||flag2) puts("YES");
	else puts("NO");
	fclose(stdin);
	fclose(stdout);
	return 0;
}

