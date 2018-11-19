#pragma GCC optimile("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
inline ull read()
{
        ull x=0,f=1; char ch=getchar();
        while(ch<'0'||ch>'9') {if(ch=='-') f=-1; ch=getchar();}
        while(ch<='9'&&ch>='0') {x=(x<<3)+(x<<1)+ch-'0'; ch=getchar();}
        return x*f;
}
int a[3][3][3][3],b[3][3][3],c[3][3],d[3];
int h[5],ans[5];
int n,k;
bool flag;
void dfs4(int st)
{
        if(flag==1) return;
        if(st==k+1)
        {
                if(a[ans[1]][ans[2]][ans[3]][ans[4]])
                {
                        puts("YES");
                        flag=1;
                }
                return;
        }
        if(h[st]==1)
        {
                ans[st]=0;
                dfs4(st+1);
        }
        if(h[st]==0)
        {
                ans[st]=0;
                dfs4(st+1);
                ans[st]=1;
                dfs4(st+1);
        }
}
void dfs3(int st)
{
        if(flag==1) return;
        if(st==k+1)
        {
                if(b[ans[1]][ans[2]][ans[3]])
                {
                        puts("YES");
                        flag=1;
                }
                return;
        }
        if(h[st]==1)
        {
                ans[st]=0;
                dfs3(st+1);
        }
        if(h[st]==0)
        {
                ans[st]=0;
                dfs3(st+1);
                ans[st]=1;
                dfs3(st+1);
        }
}
void dfs2(int st)
{
        if(flag==1) return;
        if(st==k+1)
        {
                if(c[ans[1]][ans[2]])
                {
                        puts("YES");
                        flag=1;
                }
                return;
        }
        if(h[st]==1)
        {
                ans[st]=0;
                dfs2(st+1);
        }
        if(h[st]==0)
        {
                ans[st]=0;
                dfs2(st+1);
                ans[st]=1;
                dfs2(st+1);
        }
}
void dfs1(int st)
{
        if(flag==1) return;
        if(st==k+1)
        {
                if(d[ans[1]])
                {
                        puts("YES");
                        flag=1;
                }
                return;
        }
        if(h[st]==1)
        {
                ans[st]=0;
                dfs1(st+1);
        }
        if(h[st]==0)
        {
                ans[st]=0;
                dfs1(st+1);
                ans[st]=1;
                dfs1(st+1);
        }
}
int main()
{
        n=read(); k=read();
        if(k==1)
        {
                for(int i=1; i<=n; i++)
                {
                        flag=0;
                        for(int j=1; j<=k; j++)
                        {
                                h[j]=read();
                        }
                        d[h[1]]=1;
                        dfs1(1);
                        if(flag==1) return 0;
                }
                puts("NO");
                return 0;
        }
        if(k==2)
        {
                for(int i=1; i<=n; i++)
                {
                        flag=0;
                        for(int j=1; j<=k; j++)
                        {
                                h[j]=read();
                        }
                        c[h[1]][h[2]]=1;
                        dfs2(1);
                        if(flag==1) return 0;
                }
                puts("NO");
                return 0;
        }
        if(k==3)
        {
                for(int i=1; i<=n; i++)
                {
                        flag=0;
                        for(int j=1; j<=k; j++)
                        {
                                h[j]=read();
                        }
                        b[h[1]][h[2]][h[3]]=1;
                        dfs3(1);
                        if(flag==1) return 0;
                }
                puts("NO");
                return 0;
        }
        if(k==4)
        {
                for(int i=1; i<=n; i++)
                {
                        flag=0;
                        for(int j=1; j<=k; j++)
                        {
                                h[j]=read();
                        }
                        a[h[1]][h[2]][h[3]][h[4]]=1;
                        dfs4(1);
                        if(flag==1) return 0;
                }
                puts("NO");
                return 0;
        }
}
