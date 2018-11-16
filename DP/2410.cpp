/*
    Problem:
    Algorithm:
    Note:
*/
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iomanip>
#include<iostream>
#include<cmath>
#include<queue>
using namespace std;

#define rep(i,x,y) for(i=x;i<=y;i++)
#define _rep(i,x,y) for(i=x;i>=y;i--)
#define CL(S,x) memset(S,x,sizeof(S))
#define CP(S1,S2) memcpy(S1,S2,sizeof(S2))
#define ALL(x,S) for(x=S.begin();x!=S.end();x++)
#define sqr(x) ((x)*(x))
#define mp make_pair
#define fi first
#define se second
#define upmin(x,y) x=min(x,y)
#define upmax(x,y) x=max(x,y)

typedef long long ll;
typedef long double real;
void read(int&x){bool fu=0;char c;for(c=getchar();c<=32;c=getchar());if(c=='-')fu=1,c=getchar();for(x=0;c>32;c=getchar())x=x*10+c-'0';if(fu)x=-x;};
char getc(){char c;for(c=getchar();c<=32;c=getchar());return c;}

int n,i,j,k,l,p,best,a[200010],s[200010];
const int inf=1000000000;
int main()
{
    //freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
    
    read(n);read(k);rep(i,1,n)read(a[i]),s[i]=s[i-1]+a[i];
    best=inf;rep(i,k,n)if(s[i]-s[i-k]<best)best=s[i]-s[i-k],p=i-k+1;
    printf("%d\n",p);
    scanf("\n");
    return 0;
}
