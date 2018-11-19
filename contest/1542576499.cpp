#include<bits/stdc++.h>
using namespace std ;
long long i , j , n ;
string s , a[11111] , z;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
   cin>>s>>n;
   for(i = 1 ; i <= n ; i ++)
   {
       cin>>a[i];
       if(a[i] == s){cout<<"YES";
       return 0 ;}
   }
   for(i = 1 ; i <= n ; i ++)
   {
       for(j = 1 ; j <= n ; j ++)
       {
           z = "" ;
           z = z + a[i][1] + a[j][0] ;
           if(z == s){cout<<"YES";return 0;}
       }
   }
   cout<<"NO";
   return 0 ;
}
