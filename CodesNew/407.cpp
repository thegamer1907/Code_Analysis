#include <iostream>
#include <algorithm>
using namespace std;
int  a[100100];
int main() {
    int  n , t ;
     cin>>n>>t ;
     for(int i=0 ; i< n ; i++){
         cin>>a[i];
     }
     int  l =0 , r =0  , sum =0 , ans  =0 ;
     while( r < n){
         sum += a[r] ; 
         if(sum <= t){
             ans = max( ans , (r-l +1 )) ;
         }
         while(sum> t){
            sum-=a[l] ; 
            l++;             
         }
         
         r++ ; 
     }
     cout<<ans ; 
     
    return 0;
}