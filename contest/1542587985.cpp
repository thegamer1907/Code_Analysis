#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int a,b,c,s,t,x,y,z;
int p[5],flag1,flag2;

int main()
{
	//freopen("input","r",stdin);
	scanf("%d %d %d %d %d",&a,&b,&c,&s,&t);
	x=43200/12*(a%12);x+=b*60+c;
	y=43200/60*b;y+=12*c;
	z=43200/60*c;
//	printf("%d %d %d",x,y,z);
	s=3600*(s%12);t=3600*(t%12);
	p[1]=x;p[2]=y;p[3]=z;
	sort(p+1,p+4);
	if(s>p[1] && s<p[2]) flag1=1;
	else if(s>p[2] && s<p[3]) flag1=2;
	else flag1=3;
	if(t>p[1] && t<p[2]) flag2=1;
	else if(t>p[2] && t<p[3]) flag2=2;
	else flag2=3;
	if(flag1==flag2) cout<<"YES";
	else cout<<"NO";
	return 0;
}