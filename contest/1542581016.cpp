#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<iostream>
using namespace std;
int h,m,s,t1,t2,i;
inline int read(void)
{
	int x=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){ if(ch=='-') f=-1; ch=getchar(); }
    while(ch>='0'&&ch<='9'){ x=x*10+ch-'0'; ch=getchar();}
    return x*f;
}
int main()
{
	h=read(),m=read(),s=read(),t1=read(),t2=read();
	h*=10,t1*=10,t2*=10;
	(++h)%=120;
	t1%=120;
	t2%=120;
	m=m*2+1; 
	s=s*2;
	for(i=t1;i!=t2;i=(i+1)%120)
	 if(i==h||i==m||i==s) break;
	if(i==t2) return puts("YES") & 0;
	for(i=t2;i!=t1;i=(i+1)%120)
	 if(i==h||i==m||i==s) break;
	if(i==t1) return puts("YES") & 0;
	puts("NO");
	return 0;
}

