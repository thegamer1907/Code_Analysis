#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<string>
#include<cmath>
#include<ctime>
#include<queue>
#include<stack>
#include<map>
#include<set>
#define rre(i,r,l) for(int i=(r);i>=(l);i--)
#define re(i,l,r) for(int i=(l);i<=(r);i++)
#define Clear(a,b) memset(a,b,sizeof(a))
#define inout(x) printf("%d",(x))
#define douin(x) scanf("%lf",&x)
#define strin(x) scanf("%s",(x))
#define op operator
typedef unsigned long long ULL;
typedef const int cint;
typedef long long LL;
using namespace std;
template<typename Q>
void inin(Q &x)
{
	x=0;int f=0;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=1;ch=getchar();}
	while(ch>='0'&&ch<='9')x=x*10+ch-'0',ch=getchar();
	x=f?-x:x;
}
int a[20],ed;
bool bo[20];
int main()
{
	int n,k;
	inin(n),inin(k);
	re(i,1,n)
	{
		int temp=0,now=1;
		re(j,1,k)
		{
			int x;
			inin(x);
			temp+=x*now;
			now<<=1;
		}
		if(!bo[temp])bo[temp]=1,a[++ed]=temp;
	}
	if(ed==1)
	{
		if(a[1]==0)cout<<"YES";
		else cout<<"NO";
		return 0;
	}
	re(i,1,ed)re(j,1,ed)if(i!=j&&((a[i]&a[j])==0)){cout<<"YES";return 0;}
	cout<<"NO";
	return 0;
}


