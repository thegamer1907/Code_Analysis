#include <iostream>
#include <string>
	#include <string.h>
 using namespace std; 
 

int main ()
{
  std::string str  ;
  std::string str2[10000];
  std::string s ;
  int n,j;
  cin>>str;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
      cin>>str2[i];
  }
    j=0;
   for (int j = 0; j< n; ++j)
   {
     /* code */
   
       s=str2[j];
        for (int i = 0; i < n; ++i)
        {
          s+=str2[i];
          // cout<<endl<<s<<".."<<str2[i];
           //cout<<endl<<s<<"*****************";
          if (s.find(str) != std::string::npos )
          {
            cout<<"YES";
            return 0;
          }else{
             s=str2[j];
          }
  
          
        }
        
}
      cout<<"NO";
 
 
return 0;
 
 }
 
 