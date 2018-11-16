#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    queue<pair<int,int> > q;
    q.push({n,0});
    vector<int> visit(1000000,0);
    int res=0;
    while(!q.empty())
    {
        pair<int,int> tp=q.front();
        q.pop();
        int val=tp.first;
        int steps=tp.second;
        if(val==m)
        {
            res=steps;
            break;
        }
        visit[val]=1;

        if(val-1>0&&visit[val-1]==0)
        {
            q.push({val-1,steps+1});
        }

        if(val<m&&val*2>0&&visit[val*2]==0)
        {
            q.push({val*2,steps+1});
        }
    }

    cout<<res<<endl;
}
