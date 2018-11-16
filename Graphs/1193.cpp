#include<bits/stdc++.h>
using namespace std;

vector<int>adjList[30000+1];
int visited[30000+1]={0};
queue <int>q;

int bfs(int t)
{
    q.push(1);
    visited[1]=1;
    int explore;

    while(!q.empty())
    {
       explore=q.front();
        q.pop();
       for(int i=0;i<adjList[explore].size();i++)
       {
          if(visited[adjList[explore][i]]==0)
          {
           visited[adjList[explore][i]]=1;
           q.push(adjList[explore][i]);
           if(adjList[explore][i]==t)
            return 1;
          }
       }

    }
    return 0;
}

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];

    for(int i=1;i<n;i++)
    {
       cin>>a[i];
       adjList[i].push_back(i+a[i]);
    }

     if(bfs(t)==1)
      cout<<"YES";
      else
       cout<<"NO";

  return 0;
}
