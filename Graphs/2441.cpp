#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n+1);
    vector<bool> visited(n+1,false);
    for(int i=2;i<=n;i++)
    {
        int x; cin>>x;
        v[i].push_back(x);
        v[x].push_back(i);
    }
    vector<int> c;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        c.push_back(x);
    }
    int s=1,ans=0;
    queue<pair<int,int>> q;
    q.push(make_pair(s,c[s-1]));
    visited[s]=true;
    while(!q.empty())
    {
        int p=q.front().first,pc=q.front().second;
        q.pop();
        for(int j=0;j<v[p].size();j++)
        {
            int nd=v[p][j],ndc=c[nd-1];
            if(visited[nd]==false)
            {
                visited[nd]=true;
                q.push(make_pair(nd,ndc));
                if(pc!=ndc)
                    ans++;
            }
        }
    }
    cout<<ans+1<<endl;
    return 0;
}