#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<ctime>

#define LL long long
#define inf 0x7ffffff
#define pa pair<int,int>
#define mkp(a,b) make_pair(a,b)
#define pi 3.1415926535897932384626433832795028841971
using namespace std;

namespace fastIO{
	#define BUF_SIZE 100000
	//fread -> read
	bool IOerror=0;
	inline char nc(){static char buf[BUF_SIZE],*p1=buf+BUF_SIZE,*pend=buf+BUF_SIZE;if(p1==pend){p1=buf;pend=buf+fread(buf,1,BUF_SIZE,stdin);if(pend==p1){IOerror=1;return -1;}}return *p1++;}
	inline bool blank(char ch){return ch==' '||ch=='\n'||ch=='\r'||ch=='\t';}
	inline void read(LL &x){char ch;LL f=1;while(blank(ch=nc()));while (ch=='-')f=-f,ch=nc();if(IOerror)return;for(x=ch-'0';(ch=nc())>='0'&&ch<='9';x=x*10+ch-'0');x*=f;}
	inline void read(int &x){char ch;int f=1;while(blank(ch=nc()));while (ch=='-')f=-f,ch=nc();if(IOerror)return;for(x=ch-'0';(ch=nc())>='0'&&ch<='9';x=x*10+ch-'0');x*=f;}
	inline void read(char* s){char ch;while(blank(ch=nc()));if(IOerror)return;int i=0;for (;!blank(ch);s[i++]=ch,ch=nc());s[i]='\0';}
	#undef BUF_SIZE
};
using namespace fastIO;
inline LL read()
{
	LL x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
double h,m,s;
int t1,t2;
int main()
{
    scanf("%lf%lf%lf%d%d",&h,&m,&s,&t1,&t2);
    t1%=12;t2%=12;
    if (h>11.5)h=0;
    h=h*30+m/2.0+s/120.0;
    m=m*6+s*0.1;
    s*=6;
    t1*=30;t2*=30;
    if (t1>t2)swap(t1,t2);
    bool m1=1,m2=1;
    if (h>t1&&h<t2)m1=0;
    if (m>t1&&m<t2)m1=0;
    if (s>t1&&s<t2)m1=0;
    t1+=360;swap(t1,t2);
    if (h>t1&&h<t2)m2=0;
    if (m>t1&&m<t2)m2=0;
    if (s>t1&&s<t2)m2=0;
    h+=360;
    m+=360;
    s+=360;
    if (h>t1&&h<t2)m2=0;
    if (m>t1&&m<t2)m2=0;
    if (s>t1&&s<t2)m2=0;
    if (m1||m2)puts("YES");
    else puts("NO");
}
