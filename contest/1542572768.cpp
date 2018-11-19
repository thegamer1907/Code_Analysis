#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_set>
#include <map>
#include <utility>
#include <set>
#include <unordered_map>
#include <climits>
#include <cmath>
#include <stack>
#include <string>
using namespace std ;
#define ll long long int 
#define IOS ios::sync_with_stdio(false)  ; cin.tie(0) ; cout.tie()  
#define MOD  1000000007  

bool check(string a  ,string b)
{
 
   for(int i   =  0 ;  i < a.length()  ;++i)
   {
   	 string yo = "" ; 
   	  for(int   j  =   i ; j  < a.length()  ; ++j  )
   	  {
   	  	yo += a[j] ; 
   	  	 if(yo == b)
   	  	 	return true ; 

   	  }
   }

   return false ; 

}


int main()
{ 
	//cout<<check("cbad","ba") ; 
	string s ; 
	cin>>s ; 
	int n; 
	cin>>n ;
	  string arr[n] ;    
	 for(int  i =  0 ; i< n ; ++i)
	 {
	 	cin>>arr[i]  ;
	 }
   bool ans  = false ; 


   for(int  i  = 0 ;  i < n  ; ++i)
   {
   	 string yo = arr[i] ; 
   	  for(int j   = 0  ; j  <  n  ; ++j)
   	  {
         yo += arr[j]  ; 
              if( check(yo , s) )
               ans = true ; 
          
       yo = arr[i] ; 

   	  }
   }


	 if(ans)
	 	cout<<"YES" ; 
	 else
	 	cout<<"NO"  ;

return   0 ;
}