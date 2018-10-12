#include<cstdio>
#include<map>
//#include<bits/stdc++.h>
#include<vector>
#include<stack>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
#include<cstdlib>
#include<climits>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;
typedef __int64 int64;
const ll mood=1e9+7;
const int64 Mod=998244353;
const double eps=1e-9;
const int MAXN=100010;
const double PI=acos(-1.0);
inline void rl(ll&num){
    num=0;ll f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9')num=num*10+ch-'0',ch=getchar();
    num*=f;
}
inline void ri(int &num){
    num=0;int f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9')num=num*10+ch-'0',ch=getchar();
    num*=f;
}
int getnum()// 1234 1234 a[i]=getnum();
{
    char ch=getchar();
    while((ch<'0' || ch>'9') && ch!='-')
        ch=getchar();
    return (ch-'0');
}
inline void out(int x){ if(x<0) {putchar('-');  x*=-1;}if(x>9) out(x/10);  putchar(x%10+'0'); }
int a[300020],b[300020];
int main()
{
    int n,k;
    ri(n),ri(k);
    int len=0,tem;
    for(int i=1;i<=n;i++)
    {
        ri(b[i]);
        if(!b[i]) a[++len]=i;
    }
    if(k>=len){
        out(n);putchar('\n');
        for(int i=1;i<=n;i++)
        {
            putchar('1');
            if(i!=n)putchar(' ');
        }
        putchar('\n');
    }
    else{
        a[0]=0;a[len+1]=n+1;
        int mx=-1,l,r;
        for(int i=1;i-1+k<=len;i++)
        {
            if(mx<a[i+k]-a[i-1]-1)
            {
                mx=a[i+k]-a[i-1]-1;
                l=a[i-1]+1;
                r=a[i+k]-1;
            }
        }
        out(mx);putchar('\n');
        for(int i=1;i<=n;i++)
        {
            if(i>=l&&i<=r)putchar('1');
            else out(b[i]);
            if(i!=n)putchar(' ');
        }
    }
    return 0;
}