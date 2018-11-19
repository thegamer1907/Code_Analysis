#include"algorithm"
#include"iostream"
#include"string.h"
#include"stdlib.h"
#include"stdio.h"
#include"math.h"
#include"vector"
#define ll long long
using namespace std;
namespace io
{
	char B[1<<20],*S,*T;
	inline char gc()
	{
		if(S==T)
		{
			T=(S=B)+fread(B,1,1<<20,stdin);
			return S==T?EOF:*S++;
		}
		return *S++;
	}
	template<class T>
	void gi(T&x)
	{
		x=0;register char ch=gc();register int f=1;
		while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=gc();}
		while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=gc();}
		x*=f;
	}
}
using io::gi;
int main()
{
	#ifdef whlzy
	freopen("text.in","r",stdin);
	#endif
	int h,s,m;double t1,t2;gi(h),gi(m),gi(s),gi(t1),gi(t2);
	if(h==12)h=0;
	int ok1=0,ok2=0;double t=h*60*60+m*60+s,tt=m*60+s,ttt=s;
	if(t2<t1)swap(t1,t2);t1=t1*60*60;t2=t2*60*60;
	if(t<t2&&t>t1)ok1=1;
	else if((double)(tt/3600)<(double)(t2/43200)&&(double)(tt/3600)>(double)(t1/43200))ok1=1;
	else if((double)(ttt/60)<(double)(t2/43200)&&(double)(ttt/60)>(double)(t1/43200))ok1=1;
	if((t>t2&&t<=43200)||(t>=0&&t<t1))ok2=1;
	else if(((double)(tt/3600)>(double)(t2/43200)&&(double)(tt/3600<=60))||((double)(tt/3600)>=0&&(double)(tt/3600)<(double)t1/43200))ok2=1;
	else if(((double)(ttt/60)>(double)(t2/43200)&&(double)(ttt<=60))||((double)(ttt/60)>=0&&(double)(ttt/60)<(double)(t1/43200)))ok2=1;
	if(ok1&&ok2)printf("NO");
	else printf("YES");
	return 0;
}