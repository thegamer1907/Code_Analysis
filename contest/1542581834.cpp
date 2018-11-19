#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<string>
#define nl n<<1
#define nr (n<<1)|1
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int>P;
const int INF=0x3f3f3f3f;
const ll INFF=0x3f3f3f3f3f3f3f3f;
const double pi=acos(-1.0);
const double eps=1e-9;
const ll mod=1e9+7;
int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0' | ch>'9') {if(ch=='-') f=-1;ch=getchar();}
    while(ch>='0' && ch<='9') {x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
void Out(int aa)
{
    if(aa>9)
        Out(aa/10);
    putchar(aa%10+'0');
}
int vis[1010];
int main()
{
    int n=read(),m=read(),s=read(),t1=read(),t2=read();
    //if(n==12)n=0;
    //if(t1==12)t1=0;
    if(t1>t2)swap(t1,t2);
    int up=0,down=0;
    int l=t1*5,r=t2*5;
    if(s>l&&s<r)down=1;
    else up=1;
    if((n*5>l&&n*5<r)||(n*5==l&&(m+s)))down=1;
    else up=1;
    if((m==l&&s)||(m>l&&m<r))down=1;
    else up=1;
    if(down&&up)printf("NO\n");
    else printf("YES\n");
    return 0;
}
