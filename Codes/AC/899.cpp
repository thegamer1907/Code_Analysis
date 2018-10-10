#include<bits/stdc++.h>
#define ll long long
#define int long long
#define inf (1LL<<61)
#define fi first
#define se second
#define pb push_back
#define pa pair<int,int>
#define mkp(a,b) make_pair(a,b)
const int N=1e6+10;
const int mod=998244353;
int dir[4][2]={0,1,1,0,0,-1,-1,0};
using namespace std;


int32_t main()
{
   ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
   string a;  int n,k;  cin>>n>>k>>a;
   int ans=0,l=0,r=0,g=0;
   string b=a;
   while(r<b.size())
   {
       if(b[r]=='b') g++;
       if(g>k)
       {
           while(g>k)
           {
               if(b[l]=='b') g--;
               l++;
           }
       }
       ans=max(ans,r-l+1);
       r++;
   }
   l=r=g=0;
   while(r<b.size())
   {
       if(b[r]=='a') g++;
       if(g>k)
       {
           while(g>k)
           {
               if(b[l]=='a') g--;
               l++;
           }
       }
       ans=max(ans,r-l+1);
       r++;
   }
   cout<<ans<<endl;
return 0;
}
/*

*/
