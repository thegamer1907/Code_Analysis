#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <map>
#define RG register
#define il inline
#define iter iterator
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
using namespace std;
const int N=205;
string s[N][2];int len[N],n,ls[N],rs[N],m,tot=0;
map<string,int>re;bool vis[N];
void dfs(int x,int k){
   if(vis[x])return ;vis[x]=true;
   if(!rs[x]){
      for(int i=0;i+k<=len[x];i++){
         string w=s[x][0].substr(i,k);
         if(!re[w]){
            re[w]++;tot++;
         }
      }
      return ;
   }
   string S=s[ls[x]][1]+s[rs[x]][0];
   int li=S.size();
   for(int i=0;i+k<=li;i++){
      string w=S.substr(i,k);
      if(!re[w]){
         re[w]++;tot++;
      }
   }
   dfs(ls[x],k);dfs(rs[x],k);
}
bool check(int k,int x){
   memset(vis,0,sizeof(vis));re.clear();tot=0;
   dfs(x,k);
   if(tot==(1<<k))return true;
   return false;
}
void work()
{
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
      cin>>s[i][0];
      s[i][1]=s[i][0];
      ls[i]=rs[i]=0;
      len[i]=s[i][0].size();
   }
   scanf("%d",&m);
   for(int i=n+1;i<=n+m;i++){
      scanf("%d%d",&ls[i],&rs[i]);
      s[i][0]=s[ls[i]][0];
      if(len[ls[i]]<=100)s[i][0]=s[i][0]+s[rs[i]][0];
      if(s[i][0].size()>=100)s[i][0]=s[i][0].substr(0,100);
      s[i][1]=s[ls[i]][1];
      if(len[rs[i]]<=100)s[i][1]=s[i][1]+s[rs[i]][1];
      if(s[i][1].size()>=100)s[i][1]=s[i][1].substr(s[i][1].size()-100,100);
      int k=1;
      for(k=1;k<=100;k++){
         if(!check(k,i))break;
      }
      printf("%d\n",k-1);
   }
}

int main()
{
   //	freopen("pp.in","r",stdin);
   //	freopen("pp.out","w",stdout);
	work();
	return 0;
}
