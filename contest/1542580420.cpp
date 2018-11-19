#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#define RG register
#define il inline
#define iter iterator
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
using namespace std;
const int N=1e5+5,K=6;
int t[3][3][3][3],f[6],n,k;int map[N][K];bool flag=false;
void dfs(int x,int dep){
   if(dep==k+1){
      if(t[f[1]][f[2]][f[3]][f[4]])flag=true;
      return ;
   }
   if(flag)return ;
   if(map[x][dep])f[dep]=false,dfs(x,dep+1);
   else{
      f[dep]=true;dfs(x,dep+1);
      f[dep]=false;dfs(x,dep+1);
   }
}
void work()
{
   cin>>n>>k;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=k;j++){
         scanf("%d",&map[i][j]);
      }
      t[map[i][1]][map[i][2]][map[i][3]][map[i][4]]++;
   }
   memset(f,0,sizeof(f));
   for(int i=1;i<=n;i++){
      flag=false;
      dfs(i,1);
      if(flag){
         puts("YES");
         return ;
      }
   }
   puts("NO");
}

int main()
{
	work();
	return 0;
}
