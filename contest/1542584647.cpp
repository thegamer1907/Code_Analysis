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
int n,k;
int mrk[20];
int main()
{
    n=read();k=read();
    for (int i=1;i<=n;i++)
    {
        int x=0;
        for (int j=0;j<k;j++)
        {
            int op;
            scanf("%d",&op);
            if (op)x+=1<<j;
        }
        int to=(1<<k)-1;to^=x;
        for (int j=0;j<(1<<k);j++)
        if (mrk[j]&&((j|to)==to)){puts("YES");return 0;}
        mrk[x]++;
    }
    if (mrk[0])puts("YES");
    else puts("NO");
}
