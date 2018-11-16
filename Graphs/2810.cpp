#include <bits/stdc++.h>

using namespace std;

long long int n,m;


vector <int> adj[100005];
set <int> counter[100005];
int color[100005];
int visited[100005];

void dfs(int i)
{
visited[i]=1;


for(int j =0; j<adj[i].size(); j++)
{

    counter[color[i]].insert(color[adj[i][j]]);
    counter[color[adj[i][j]]].insert(color[i]);
   if(!visited[adj[i][j]])
   {
    dfs(adj[i][j]);
   }
}

}


int main()
{
 cin>>n>>m;
int colorlimit=INT_MIN;
 for(int i =0; i<n; i++)
 {
 scanf("%d", &color[i]);
 counter[color[i]].insert(color[i]);
 colorlimit=max(color[i],colorlimit);
 }

 long long int a,b;

 for(int i =0; i<m; i++)
 {
    scanf("%d" , &a);
    scanf("%d" , &b);
    adj[a-1].push_back(b-1);
    adj[b-1].push_back(a-1);
 }
for(int i =0; i<n; i++)
    if(!visited[i])
    dfs(i);


 int maximum = INT_MIN;

 int ans=-1;
 for(int i =1; i<=colorlimit; i++)
 {

int x = counter[i].size();
if(x>maximum)
{
maximum=x;
ans=i;
 }
 }
 cout<<ans<<endl;


}