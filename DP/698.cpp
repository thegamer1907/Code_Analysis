#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main ()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll n,i,m,l,r;
     string str;
     cin>>str;

     ll len=str.length();
     ll dp[len];
     dp[0]=0;
     for(i=0;i<len-1;i++)
     {
         if(str[i]==str[i+1])
           dp[i+1]=dp[i]+1 ;
         else
            dp[i+1]=dp[i];
     }
     cin>>m;
     while(m--)
     {
         cin>>l>>r;
         cout<<dp[r-1]-dp[l-1]<<endl;
     }

     return 0;
}
