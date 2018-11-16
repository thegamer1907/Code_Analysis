#include<bits/stdc++.h>
using namespace std;

const int N=3*1e4+1;
vector<int>adj[N];

bool dfs(int head,int dest,int nodes){
stack<int>s;
s.push(head);

bool v[nodes+1];
for(int i=1;i<=nodes;i++)
v[i]=false;

v[head]=true;

while(!s.empty())
{
int q=s.top();
s.pop();

for(int i=0;i<adj[q].size();i++)
{
if(v[ adj[q][i] ]==false)
  { 
    v[adj[q][i]]=true;
    s.push(adj[q][i]);  
  }
}

}

if(v[dest]==false)
return false;
return true;

}


int main()
{
int n,t;
cin>>n>>t;
for(int i=1;i<n;i++)
{int a;
cin>>a;
adj[i].push_back(a+i);
}
bool ans;

ans=dfs(1,t,n);

if(ans)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

return 0;

}

/*

_ _ _ _ ........._ (n)  (1 X N)



*/