#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,d;
 cin>>n>>d;
 int a[n];
 int i,j;
 for(i=1;i<n;i++)
 cin>>a[i];

 
 vector<int>g[n+1];
 

 
 for(i=1;i<n;i++)
 {
    g[i].push_back(i+a[i]); 

 }
 

    
  queue<int>q;
  q.push(1);
  
   bool vis[n+1];
 
 memset(vis,false,sizeof(vis));
 
  vis[1]=true;
  int u,v;
  
  while(!q.empty())
  {
     u=q.front();
     q.pop();
     for(v=0;v<g[u].size();v++)
     {
           if(vis[g[u][v]]==false)
           {
               vis[g[u][v]]=true;
               q.push(g[u][v]);
           }
         
     }
     
  }
  
  if(vis[d]==true)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
  
  
  return 0;  
}