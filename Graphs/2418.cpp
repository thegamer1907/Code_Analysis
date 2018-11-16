#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll i, smax=1, s;
vector <vector <ll> > g(2001);
short int used[2001]={0};
ll dfs(ll x, ll s){
   if(used[x]==1) return 0, s;
   used[x]=1; s++;
   if(s>smax) smax=s;
   for(ll k=0; k<g[x].size(); k++)
      dfs(g[x][k], s);
   return 0, s;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll n, a, j; cin>>n;
   for(i=1; i<=n; i++){
      cin>>a;
      if(a>0)
      g[a].push_back(i);
   }
   for(i=1; i<=n; i++){
      for(j=0; j<=n; j++)
         used[j]=0;
      s=1;
      used[i]=1;
      for(j=0; j<g[i].size(); j++)
         dfs(g[i][j], s);
   }
   cout<<smax;
   return 0;
}
