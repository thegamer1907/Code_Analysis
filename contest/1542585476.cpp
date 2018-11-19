#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#define IL inline
#define RG register
#define db double
#define pi acos(-1.0)
#define inf 0x3f3f3f3f
#define LL long long
using namespace std;
IL int gi()
{
	RG int res=0,s=1;RG char ch;
	for(ch=getchar(); (ch<'0'||ch>'9')&&ch!='-' ;ch=getchar());
	if(ch=='-') s=-1,ch=getchar();
	for(;ch>='0'&&ch<='9';ch=getchar()) res=10*res+ch-48;
	return res*s;
}
db h,m,s,t1,t2;
int main()
{
	//freopen("2.in","r",stdin);
	//freopen("2.out","w",stdout);
	h=gi(),m=gi(),s=gi(),t1=gi(),t2=gi();
	if(m>0||s>0) h+=0.5;
    if(((int)m%5)==0 &&!s) m=m/5;
	else m=(int)m/5 +0.5;
	if(((int)s%5)==0) s=s/5;
	else s= (int)s/5+0.5;
	RG int cnt=0;
	if(t2<t1) {
		if(h>t2&&h<t1)cnt++;
		if(m>t2&&m<t1)cnt++;
		if(s>t2&&s<t1)cnt++;
		if(cnt==0||cnt==3) printf("yes\n");
		else printf("no\n");
	}
	else {
		if(h>t1&&h<t2)cnt++;
		if(m>t1&&m<t2)cnt++;
		if(s>t1&&s<t2)cnt++;
		if(cnt==0||cnt==3) printf("yes\n");
		else printf("no\n");
	}
	//fclose(stdin);fclose(stdout);
	return 0;
}