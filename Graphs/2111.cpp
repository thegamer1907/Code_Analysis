#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,vis[100005];
    queue<pair<long long int,long long int>> q;
    cin>>n>>m;
    if(n == m)
    {
        cout<<"0"<<endl;
        return 0;
    }
    q.push(make_pair(n,0));
    while(!q.empty())
    {
        pair<long long int,long long int> p = q.front();
        q.pop();
        long long int x = p.first;
        long long int level = p.second;
        //cout<<"n = "<<x<<endl;
        if(x == m)
        {
            cout<<level<<endl;
            return 0;
        }
        if(x>10000 || x<1)
        continue;
        if(vis[x]==1)
        continue;
        vis[x]=1;
        q.push(make_pair(2*x,level+1));
        q.push(make_pair(x-1,level+1));

    }
}