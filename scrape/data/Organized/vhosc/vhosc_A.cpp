#include<cstdio>
#include<cctype>

#ifdef __GNUG__
	#pragma GCC diagnostic error "-std=c++17"
#endif

#ifdef __GNUG__
	#include<omp.h>
#endif

#ifdef __GNUG__
	#pragma GCC optimize("O3")
#endif

#ifdef  __linux
	#define getchar getchar_unlocked
	#define putchar putchar_unlocked
#endif

template<typename ut>
class iopv
{
public:
	void out(ut);
	operator ut(void);
public:
	iopv(void);
	~iopv(void);
};

template<typename ut>
inline
iopv<ut>::iopv(void)
{
}

template<typename ut>
inline
iopv<ut>::~iopv(void)
{
}

template<typename ut>
inline
iopv<ut>::operator ut(void)
{
	char s='#';
	ut x=0,fg=0;
	while(!isdigit(s))
	{
		fg|=s=='-';
		s=getchar();
	}
	while(isdigit(s))
	{
		x=x*10+s-'0';
		s=getchar();
	}
	return fg?-x:x;
}

template<typename ut>
inline
void iopv<ut>::out(ut x)
{
	static char z[20]={};
	char *i=z;
	if(!x)
		putchar('0');
	else
	{
		if(x<0)
			putchar('-'),x=-x;
		while(x)
		{
			ut y=x/10;
			*i++=x-y*10+'0',x=y;
		}
		while(i!=z)
			putchar(*--i);
	}
	putchar(' ');
}

#ifdef  __linux
	typedef long long __int64;
#endif

#ifdef  __linux
	#undef getchar
	#undef putchar
#endif

iopv<int>it;

#include<iostream>
using std::cerr;
using std::endl;

#include<algorithm>
typedef std::pair<int,int>pi;
#define x first
#define y second

#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define p1 cout<<"tokitsukaze"
#define p2 cout<<"quailty"
#define p3 cout<<"once again"

const int __n=1e5+10;
int n,k;
int st0,es0,gs0,st1,es1,gs1,q0[__n],h0[__n],q1[__n],h1[__n],a[__n];
int work(void)
{
	q0[0]=q1[0]=-2;
	for(int i=1;i<=n;i++)
	{
		if(!a[i])
			q0[i]=i;
		else
			q0[i]=q0[i-1];
		if(a[i])
			q1[i]=i;
		else
			q1[i]=q1[i-1];
	}
	h0[n+1]=h1[n+1]=n+10;
	for(int i=n;i>=1;i--)
	{
		if(!a[i])
			h0[i]=i;
		else
			h0[i]=h0[i+1];
		if(a[i])
			h1[i]=i;
		else
			h1[i]=h1[i+1];
	}
	if(es1-st1+1>=k+2)
		return 0;
	if(es0-es0+1>=k+2)
		return 0;
	if((es1-h1[k+1]+1>k)||(es0-h0[k+1]+1>k))
		return 0;
	if((q1[k-1]-st1+1>k)||(q0[k-1]-st0+1>k))
		return 0;
	return 1;
}

char rd(void)
{
    char c=getchar()-'0';
    for(;c<0||c>9;c=getchar()-'0');
    return c;
}

int main(void){
    n=it,k=it;
	for(int i=1;i<=n;i++){
		a[i]=rd();
		if(a[i]==0){
			gs0++;
			if(gs0==1)
				st0=i;
			es0=i;
		}
		if(a[i]==1){
			gs1++;
			if(gs1==1)
				st1=i;
			es1=i;
		}
	}
	if(((es1-st1+1)<=k)||((es0-st0+1)<=k)){
		p1;return 0;
	}
	if(work()){
		p2;return 0;
	}
	p3;return 0;
    return 0;
}