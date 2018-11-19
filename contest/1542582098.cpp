#include<bits/stdc++.h>
using namespace std;
#define LL long long
const int Maxn=10010;
LL t1,t2,h,m,s;
LL gcd(LL a,LL b)
{
	if(a==0)return b;
	return gcd(b%a,a);
}
struct A{LL x,y,id;}k[8];
bool big(A a,A b)
{
	LL lcm1=a.y/gcd(a.y,b.y)*b.y,t1=lcm1/a.y,t2=lcm1/b.y;
	return a.x*t1>=b.x*t2;
}
bool cmp(A a,A b)
{
	return !big(a,b);
}
A operator + (A a,A b)
{
    A c;
    LL g1=gcd(a.y,b.y),l=a.y/g1*b.y,c1=l/a.y,c2=l/b.y;
    LL fz=a.x*c1+b.x*c2,fm=l,g2=gcd(fz,fm);
    c.x=fz/g2;c.y=fm/g2;
    return c;
}
A operator * (A a,A b)
{
    A c;
    LL g1=gcd(a.x*b.x,a.y*b.y);
    c.x=a.x*b.x/g1;c.y=a.y*b.y/g1;
    return c;
}
A o1,o3,o4,o5,ot1,ot2;
void print(A x)
{
	printf("%I64d/%I64d\n",x.x,x.y);
}
int main()
{
	o5.x=360LL;o5.y=1LL;
	o4.x=6LL;o4.y=1LL;
	o3.x=-360LL;o3.y=1LL;
	o1.x=30LL;o1.y=1LL;
	scanf("%I64d%I64d%I64d%I64d%I64d",&h,&m,&s,&t1,&t2);
	A oh,om;oh.x=h;oh.y=1;om.x=m;om.y=1;
	A n1;n1.x=m*60LL+s;n1.y=3600LL;
	n1=n1*o1+oh*o1;
	if(big(n1,o5))n1=n1+o3;
	
	A n2;n2.x=s;n2.y=60LL;
	n2=n2*o4+om*o4;
	if(big(n2,o5))n2=n2+o3;
	
	A n3;n3.x=s;n3.y=60LL;
	n3=n3*o5;
//	print(n1);print(n2);print(n3);
	ot1.x=t1;ot2.x=t2;ot1.y=ot2.y=1LL;
	ot1=ot1*o1;ot2=ot2*o1;
	if(big(ot1,o5))ot1=ot1+o3;
	if(big(ot2,o5))ot2=ot2+o3;
	k[1]=n1;k[2]=n2;k[3]=n3;k[4]=ot1;k[5]=ot2;
	for(int i=1;i<=5;i++)k[i].id=i;
	sort(k+1,k+6,cmp);
	bool no=true;
	for(int i=1;i<5;i++)
	if(k[i].id+k[i+1].id==9)
	{
		no=false;
		break;
	}
	if(k[5].id+k[1].id==9)no=false;
//	for(int i=1;i<=5;i++)print(k[i]);
	if(no)puts("NO");
	else puts("YES");
}
