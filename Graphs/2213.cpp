#include<bits/stdc++.h>
#define mt make_tuple
#define mp make_pair
#define pu push_back
#define INF 1000000001
#define MOD 1000000007
#define ll long long int
#define ld long double
#define vi vector<int>
#define vll vector<long long int>
#define sc(n) scanf("%d",&n);
#define scll(n) scanf("%lld",&n);
#define scld(n) scanf("%Lf",&n);
#define scr(s) {char temp[1000000];scanf("%s",temp);s = temp;}

using namespace std;

int dfs(vector<int>*adj,int parent,int u,int*visited)
{
  // cout<<"u: "<<u<<endl;
  visited[u] = 1;
  if(adj[u].size()==1 && adj[u][0] == parent) return 1;
  int max1 = -1;
  for(int i=0;i<adj[u].size();i++) if(adj[u][i]!=parent) max1 = max(max1,dfs(adj,u,adj[u][i],visited));
  return max1 +1;
}

int main()
{
  int n;
  sc(n);
  int *l = new int[n];
  for(int i=0;i<n;i++) 
  {
    int a;
    sc(a);
    if(a!=-1) a--;
    l[i] = a;
  }
  vector<int>*adj = new vector<int>[n];
  for(int i=0;i<n;i++) if(l[i]!=-1) {adj[i].pu(l[i]);adj[l[i]].pu(i);}
  int* visited = (int*)calloc(n,sizeof(int));
  int max1 = 1;
  for(int i=0;i<n;i++) 
  {
    // cout<<"i: "<<i<<endl;
    if(!visited[i]) max1 = max(max1,dfs(adj,l[i],i,visited));
  }
  cout<<max1<<endl;
  return 0;
}

