#include<bits/stdc++.h>
using namespace std;
#define maxn 300000
int ans[210];
string s0;
bool flag;
void dfs(string s,string s0,int k,int n)
{
    if (k==n+1)
    {
        if (s.find(s0)==-1) flag=false;
        return ;
    }
    for(int i=0;i<2;i++)
    {
        if (i) dfs(s,s0+"1",k+1,n);
        else dfs(s,s0+"0",k+1,n);
        if (!flag) return ;
    }
}
int main()
{
     int n,m,i,j,a,b,len;
     string s[210];
     cin>>n;
     for(i=1;i<=n;i++)
     {
         cin>>s[i];flag=true;
         for(j=1;;j++)
         {
             dfs(s[i],"",1,j);
             if (!flag) break;
         }
         ans[i]=j-1;
     }
     cin>>m;
     for(i=1;i<=m;i++)
     {
         scanf("%d%d",&a,&b);
         s0=s[a]+s[b];flag=true;
         for(j=max(ans[a],ans[b])+1;;j++)
         {
             dfs(s0,"",1,j);
             if (!flag) break;
         }
         ans[n+i]=j-1;
         printf("%d\n",ans[n+i]);
         len=s0.length();
         if (len>maxn) s0=s0.substr(0,maxn/2)+s0.substr(len-maxn/2,maxn/2);
         s[n+i]=s0;
     }
     return 0;
}