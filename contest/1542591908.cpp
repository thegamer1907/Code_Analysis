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
char a[3],s[111][3];
int main()
{
	int n;
	scanf("%s",a);inin(n);
	re(i,1,n)scanf("%s",s[i]);
	re(i,1,n)if(a[0]==s[i][0]&&a[1]==s[i][1]){cout<<"YES";return 0;}
	re(i,1,n)re(j,1,n)
	{
		if(s[i][1]==a[0]&&s[j][0]==a[1]){cout<<"YES";return 0;}
	}
	cout<<"NO";
	return 0;
}


