#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define all(x) x.begin() , x.end()
#define pb push_back
#define mp make_pair
int const N = 2e5;
int n , q , v[N] , dp[N]; 
bool vis[N+1];
void read()
{
   scanf("%d%d",&n,&q);
   for(int i=1;i<=n;++i)
   		scanf("%d",v+i);
   	for(int i=n;i>=1;--i){
        if(!vis[v[i]])
        	 {
        	 	dp[i] += dp[i+1]+1;
        	 	vis[v[i]]=true;
        	 }
        	 else dp[i]+=dp[i+1];
   	 }
}
void print()
{
	for(int i=0 ,qq ;i<q;++i)
	{
		scanf("%d",&qq); 
		printf("%d\n",dp[qq]);
	}
}
int main(){
  // freopen("input.txt","r",stdin);
   read();
   print();
}