
#include<queue>
#include<iostream>
using namespace std;
int n,m;
bool vis[11000];
struct node
{
    int step,val;
}s,v,c;
void bfs()
{
    queue<node>p;
    s.val=n,s.step=0;
    p.push(s);
    vis[n]=false;
    while(!p.empty())
    {
        c=p.front();p.pop();
        if(c.val==m) {cout<<c.step<<endl;break;}
        int x=c.val;
        if(vis[x*2]&&x*2<m+2)
        {
           vis[x*2]=false;
           v.step=c.step+1;
           v.val=x*2;
           p.push(v);
        }
        if(vis[x-1]&&x-1>0)
        {
            vis[x-1]=false;
            v.step=c.step+1;
            v.val=x-1;
            p.push(v);
        }
    }
}
int main()
{
    while(cin>>n>>m)
    {
        if(n>m) cout<<n-m<<endl;
        else
        {
            fill(vis,vis+11000,true);
            bfs();
        }
    }
    return 0;
}