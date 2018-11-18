#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define ll long long
using namespace std;
int n,m,cnt,ans,fo[210][20],la[210][20],len[210];
int bi[30],tot;
char ss[210];
bool flag,mp[210][20010];
void upd(int a,int b,int c)
{
    int i,s,j,k;
    for(i=1;i<=min(len[b],12);i++)fo[a][i]=fo[b][i];
    s=1;k=len[b];
    while(k<12 && s<=len[c])fo[a][++k]=fo[c][s++];
    for(i=1;i<=min(len[c],12);i++)la[a][i]=la[c][i];
    s=1;k=len[c];
    while(k<12 && s<=len[b])la[a][++k]=la[b][s++];
    len[a]=min(len[b]+len[c],12);
    for(i=0;i<bi[14];i++)mp[a][i]=(mp[b][i]|mp[c][i]);
    tot=0;
    for(s=1;s<=len[b];s++)
    {
        tot+=la[b][s]*bi[s-1];j=0;
        for(k=1;k<=len[c] && s+k<=12;k++)j=(j<<1)+fo[c][k],mp[a][tot*bi[k]+j+bi[s+k]]=1;
    }
}
int main()
{
    int i,s,a,b,j,k;
    bi[0]=1;for(i=1;i<=20;i++)bi[i]=bi[i-1]<<1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %s",ss);len[i]=min((int)strlen(ss),12);k=strlen(ss);
        for(s=1;s<=len[i];s++)fo[i][s]=ss[s-1]-'0',la[i][s]=ss[k-s]-'0';
        for(s=strlen(ss)-1;s>=0;s--)
        {
            tot=0;
            for(k=s;k>=max(0,s-12);k--)
            {
                j=ss[k]-'0';
                tot+=bi[s-k]*j;
                mp[i][tot+bi[s-k+1]]=1;
            }
        }
    }
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d%d",&a,&b);
        upd(++n,a,b);ans=0;
        for(s=12;s && !ans;s--)
        {
            ans=s;
            for(k=0;k<bi[s] && ans;k++)
                if(!mp[n][k+bi[s]])ans=0;
        }
        printf("%d\n",ans);
    }
    return 0;
}