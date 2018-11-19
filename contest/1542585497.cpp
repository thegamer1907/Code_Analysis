#include<bits/stdc++.h>
using namespace std;
int idx[12];
int vis[12];
int to[12][12];
int top=1;
struct edge{int to,next;}e[10005];
int h,m,s,t1,t2;
void add(int x,int y)
{
    e[top].to=y;
    e[top].next=idx[x];
    idx[x]=top++;
}
void bfs(int start)
{
    memset(vis,0,sizeof(vis));
    queue<int> q;
    vis[start]=1;
    q.push(start);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=idx[p];i;i=e[i].next)
        {
            if(vis[e[i].to]==0)
            {
                vis[e[i].to]=1;
                q.push(e[i].to);
            }
        }
    }
}
int main()
{
    memset(to,0,sizeof(to));
    memset(vis,0,sizeof(vis));
    memset(idx,0,sizeof(idx));
    cin>>h>>m>>s>>t1>>t2;
    h%=12;
    t1%=12;
    t2%=12;
    if(s==0)
    {
        vis[0]=1;
        if(m==0) vis[h]=1;
        else 
        {
            to[h][(h+1)%12]=1;
            to[(h+1)%12][h]=1;
            if(m%5==0)
            {
                int temp=m/5;
                vis[temp]=1;
            }
            else
            {
                int temp=m/5;
                to[temp][(temp+1)%12]=1;
                to[(temp+1)%12][temp]=1;
            }
        }
    }
    else
    {   
        if(s%5==0)
        {
            int temp=s/5;
            vis[temp]=1;
        }
        else 
        {
            int temp=s/5;
            to[temp][(temp+1)%12]=1;
            to[(temp+1)%12][temp]=1;
        }
        int dd1=m/5;
        to[dd1][(dd1+1)%12]=1;
        to[(dd1+1)%12][dd1]=1;
        int dd2=h;
        to[dd2][(dd2+1)%12]=1;
        to[(dd2+1)%12][dd2]=1;
    }
    for(int i=0;i<12;i++)
    {
        if(vis[i]==0)
        {
            if(to[i][(i+1)%12]==0&&vis[(i+1)%12]==0) add(i,(i+1)%12);
            if(to[i][(i+11)%12]==0&&vis[(i+11)%12]==0) add(i,(i+11)%12);
        }
    }
    bfs(t1);
    if(vis[t2]) printf("YES\n");
    else printf("NO\n");
    return 0;
}
