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
char a[105][2];
int main()
{
	#ifdef whlzy
	freopen("text.in","r",stdin);
	#endif
	char s[2];scanf("%s",s);
	int n,ok1=0,ok2=0;scanf("%d",&n);
	for(int i=1;i<=n;i++){scanf("%s",a[i]);if(a[i][0]==s[0]&&a[i][1]==s[1])ok1=1,ok2=1;if(a[i][0]==s[1])ok1=1;if(a[i][1]==s[0])ok2=1;}
	if(ok1&&ok2)printf("YES");
	else printf("NO");
	return 0;
} 