#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <set>
#include <vector>
#include <queue>
#include <map>
using namespace std;
set<string>st;
int vis[1000];
int main()
{
    int h,m,s,t1,t2;
    while(cin>>h>>m>>s>>t1>>t2)
    {
        int flag=100,mm=100;
        memset(vis,0,sizeof(vis));
        int shi=h;
        int fen=m/5;
        int miao=s/5;
        vis[shi]=1;
        vis[fen]=1;
        vis[miao]=1;
        vis[shi+12]=1;
        vis[fen+12]=1;
        vis[miao+12]=1;
        int minn=min(t1,t2);
        int maxx=max(t1,t2);
        int i;
        for(i=minn;i<maxx;i++)
        {
            if(vis[i]==1)
            {
                flag=10;
                break;
            }
        }
//        cout<<flag<<endl;
        for(int i=maxx;i<minn+12;i++)
        {
            if(vis[i]==1)
            {
                mm=10;
                break;
            }
        }
//        cout<<mm<<endl;
        if(mm==100 || flag==100) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
