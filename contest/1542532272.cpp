#include<bits/stdc++.h>  
using namespace std;
typedef unsigned long long ull;
const int maxn=1e5+5,inf=0x3f3f3f;
inline ull get();
ull n,k;
ull a[maxn];
ull t[maxn];
ull p,q;
ull f[maxn],g[maxn],now;

inline void work(ull l,ull r,ull L,ull R);

int main()
{
    n=get();k=get();
    for(int i=1;i<=n;i++)
        a[i]=get();
    memset(f,inf,sizeof(f));
    f[0]=0;
    for(ull i=1;i<=k;i++)
    {
        p=1;q=now=0;
        memset(t,0,sizeof(t));
        work(i,n,i,n);
        memcpy(f,g,sizeof(f));
    }
    printf("%lld\n",f[n]);
    return 0;
}

inline void work(ull l,ull r,ull L,ull R)
{
    if(l>r)return;
    ull mid=(l+r)/2,temp=min(R,mid);  
    ull mv=1e19;  
    while(q<mid)now+=t[a[++q]]++;  
    while(p>temp+1)now+=t[a[--p]]++;  
    while(q>mid)now-=--t[a[q--]];  
    while(p<temp+1)now-=--t[a[p++]]; 
    for(ull i=temp;i>=L;i--) 
    {
        ull x=a[i];
        now+=t[a[--p]]++;  
        if(now+f[i-1]<mv)mv=now+f[i-1],temp=i;
    }  
    g[mid]=mv;  
    work(l,mid-1,L,temp);  
    work(mid+1,r,temp,R);  
}

inline ull get()
{
    ull re=0;
    char x;
    while(x<'0'||'9'<x)
    {
        x=getchar();
    }
    while('0'<=x&&x<='9')
    {
        re=re*10+x-'0';
        x=getchar();
    }
    return re;
}