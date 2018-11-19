#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;
int n,m;
bool hh[202],WA;
map<string,bool>fl[202];
vector<string>g[202];
string s[202],a[202],b[202],h;
void dfs(int q,int x,int y){
    if (x>=y)
    {
        if (!fl[q][h])WA=1;
        return;
    }
    h+='0';dfs(q,x+1,y);
    h.erase(h.end()-1);h+='1';
    dfs(q,x+1,y);h.erase(h.end()-1);
}
bool pd(int x,int ans){
    WA=0;dfs(x,0,ans);return !WA;
}
int main()
{
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        cin>>s[i];int l=s[i].length();
        for (int j=0;j<l;j++)
        {
            string a;
            for (int k=j;k<l&&k<j+12;k++)
            {a+=s[i][k];if (!fl[i][a])g[i].push_back(a);fl[i][a]=1;}
        }
        if (l>12)
        {
            hh[i]=1;
            for (int j=0;j<12;j++)
            a[i]+=s[i][j];
            for (int j=l-12;j<l;j++)
            b[i]+=s[i][j];
        }
        else a[i]=b[i]=s[i];
    }
    scanf("%d",&m);
    while(m--)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        n++;
        for (int i=0;i<g[u].size();i++){if (!fl[n][g[u][i]])g[n].push_back(g[u][i]);fl[n][g[u][i]]=1;}
        for (int i=0;i<g[v].size();i++){if (!fl[n][g[v][i]])g[n].push_back(g[v][i]);fl[n][g[v][i]]=1;}
        if (!hh[u] && !hh[v] && s[u].length()+s[v].length()<=12)
        {
            s[n]=s[u]+s[v];int l=s[n].length();
            for (int j=0;j<l;j++)
            {
                string a;
                for (int k=j;k<l;k++)
                {a+=s[n][k];if (!fl[n][a])g[n].push_back(a);fl[n][a]=1;}
            }
            a[n]=b[n]=s[n];
        }
        else
        {
            hh[n]=1;
            if (!hh[u])
            {
                a[n]=a[u];int l=s[u].length();
                for (int i=0;i<12-l;i++)
                a[n]+=a[v][i];
            }
            else a[n]=a[u];
            if (!hh[v])
            {
                int l=b[u].length();
                for (int i=l-(12-s[v].length());i<l;i++)
                b[n]+=b[u][i];
                b[n]+=s[v];
            }
            else b[n]=b[v];
            int l1=b[u].length(),l2=a[v].length();
            for (int i=0;i<l1;i++)
            for (int j=0;j<l2;j++)
            {
                string gg;
                for (int k=i;k<l1;k++){gg+=b[u][k];if (!fl[n][gg])g[n].push_back(gg);fl[n][gg]=1;}
                for (int k=0;k<=j;k++){gg+=a[v][k];if (!fl[n][gg])g[n].push_back(gg);fl[n][gg]=1;}
            }
        }
        for (int i=11;i>=0;i--)
        if (!i || pd(n,i)){printf("%d\n",i);break;}
    }
    return 0;
}