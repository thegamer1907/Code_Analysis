//Bismillah_hir_rahmanir_rahim

#include<bits/stdc++.h>
using namespace std;


int main()
{
  
  string pass;
  
  cin >> pass;
  
  int n ; 
  
  cin >> n ; 
  
  string str ;
  bool f1 = false , f2 = false ;
  for(int i = 0 ;i<n ;++i)
  {
     cin >> str;
     
     if(pass[0]==str[1])
     {
         f1 = true;
     }
     if(pass[1]==str[0])
     {
         f2 = true ;
     }
     if(pass==str)
     {
         f1 = true , f2 = true ;
     }
  }
  
  if(f1 and f2)
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }
  
  
    return 0;
}

