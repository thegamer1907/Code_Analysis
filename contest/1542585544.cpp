#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cctype>
#include<cstring>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
using namespace std;
const double pi=3.1415926535;
int h,m,s,t1,t2;
double a[10],b,c;
void read(int &x)
{
	char ch;
	x=0;
	int F=0;
	ch=getchar();
	while(!isdigit(ch))
	  {
	  	if(ch=='-') F=1;
	  	ch=getchar();
	  }
	while(isdigit(ch))
	  {
	  	x=x*10+ch-'0';
	  	ch=getchar();
	  }
	if(F) x=-x;
	return;
}
int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	read(h);read(m);read(s);read(t1);read(t2);
	int ok=0;
	a[1]=s*pi/30;
	a[2]=m*pi/30+s*pi/1800;
	a[3]=h*pi/6+m*pi/360+s*pi/21600;
	b=t1*pi/6;
	c=t2*pi/6;
	sort(a+1,a+4);
	if(b>c) swap(b,c);
	if(b>a[1] && c<a[2]) ok=1;
	else if(b>a[2] && c<a[3]) ok=1;
	else if(b<a[1] && c<a[1]) ok=1;
	else if(b>a[3] && c>a[3]) ok=1;
	else if(b<a[1] && c>a[3]) ok=1;
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}
