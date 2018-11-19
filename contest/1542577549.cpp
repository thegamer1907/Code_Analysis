#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
const int maxn = 100;
const int INF = 0x3f3f3f3f;

int n,k;
int g[maxn];
int p = 0;
bool vis[maxn];
int a[5];
int main()
{
   cin >> n >> k;
   memset(g,0,sizeof g);
   memset(vis,false,sizeof vis);
   for(int i = 0; i < n; i++)
   {
       int t = 1;
       int b = 0;
       for(int j = 0; j < k; j++)
         {
             int r;
             scanf("%d",&r);
             if(r == 0)
             b += t;
             t *= 2;
         }

     if(!vis[b])
     {
         vis[b] = true;
         g[p++] = b;
     }
   }

   int ans = 1;
   while(k--)
     ans *= 2;
     ans --;
   for(int i = 0; i < p; i++)
    for(int j = i; j < p; j++)
   {
       if((g[i]|g[j]) == ans) {cout << "YES" << endl;return 0;}
   }
   cout << "NO" << endl;
   return 0;
}
